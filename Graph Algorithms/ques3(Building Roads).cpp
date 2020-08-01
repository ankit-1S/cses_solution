// problem set link -- https://cses.fi/problemset/  
 
/* UserName - ankit_S
  author- Ankit kumar
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std; 
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define MOD 1000000007
int main(){
    int n,m;
    cin>> n>>m;
    vector<vector<int>>graph(n+1);
    vector<bool>visited(n+1,false);
    for(int i=0;i<m;i++){
        int a,b;
        cin>> a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<int >ans;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            ans.push_back(i);
            queue<int>que;
            que.push(i);
            while(!que.empty()){
                int temp=que.front();
                que.pop();
                visited[temp]=true;
                for(auto j:graph[temp]){
                    if(!visited[j]){
                        que.push(j);
                    }
                }
            }
        }
    }
    cout<<ans.size()-1<<endl;
    for(int i=0;i<ans.size()-1;i++){
        cout<<ans[i]<<" "<<ans[i+1]<<endl;
    }
}
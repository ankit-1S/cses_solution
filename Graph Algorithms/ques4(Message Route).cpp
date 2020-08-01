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
    
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<bool>vis(n+1,false);
    vector<int>par(n+1,-1);
    queue<int>que;
    que.push(1);
    while(!que.empty()){
        int temp=que.front();
        que.pop();
        vis[temp]=true;
        if(temp==n)break;
        for(auto i: graph[temp]){
            if(!vis[i]){
                que.push(i);
                vis[i]=true;
                par[i]=temp;
            }   
        }
    }
    if(par[n]==-1){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        vector<int >ans;
        int x=n;
        while(par[x]!=-1){
            ans.push_back(x);
            x=par[x];
        }
        ans.push_back(1);
        cout<<ans.size()<<endl;
        for(int i=ans.size()-1;i>=0;i--){
            cout<<ans[i]<<" ";
        }
    }
}
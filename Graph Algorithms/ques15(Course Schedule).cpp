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
const int N=2e5;
vector<vector<int>>graph(N+1);
vector<bool >vis(N+1,false);
vector<bool >active(N+1,false);
vector<int >ans;

void dfs(int node){
    vis[node]=true;
    active[node]=true;
   
    for(auto i:graph[node]){
        if(!vis[i]){
            dfs(i);
        }
        else if(active[i]){
            cout<<"IMPOSSIBLE"<<endl;
            exit(0);
        }
    }
    ans.push_back(node);
    active[node]=false;
}
int main(){
    int n,m;
    cin>> n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>> b;
        graph[a].push_back(b);
    }
 
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    
    for(int i=ans.size()-1;i>=0;i--)
        cout<<ans[i]<<" ";
 
 
    
}   
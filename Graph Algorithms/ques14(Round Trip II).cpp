  
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
vector<int>par(N+1,-1);
vector<bool >vis(N+1,false);
vector<bool >active(N+1,false);

void dfs(int node,int parent){
    vis[node]=true;
    active[node]=true;
    par[node]=parent;
    for(auto i:graph[node]){
        if(!vis[i]){
            dfs(i,node);
        }
        else if(active[i]){
            vector<int>ans;
            int x=node;
            while(x!=i){
                ans.push_back(x);
                x=par[x];
            }
            ans.push_back(i);
            ans.push_back(node);
            cout<<ans.size()<<endl;
            reverse(ans.begin(),ans.end());
            for(auto j:ans){
                cout<<j<<" ";
            }
            exit(0);
        }
    }
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
            dfs(i,0);
        }
    }
    
    cout<<"IMPOSSIBLE"<<endl;    
}   
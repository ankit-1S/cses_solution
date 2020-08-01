  
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
vector<int >par(N+1);
vector<int >dp(N+1,0);
vector<bool >vis(N+1,false);
int n,m;

void dfs(int node){
    dp[node]=node==n?1:-1e5;
    vis[node]=true;   
    for(auto i:graph[node]){
        if(!vis[i]){
            par[i]=node;
            dfs(i);   
        }
        if(dp[node]<1+dp[i]){
            dp[node]=1+dp[i];
            par[node]=i;
        }
    }
    
}
int main(){
    
    cin>> n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>> b;
        graph[a].push_back(b);
    }
    for(int i=1;i<=n;i++)
 		dfs(i);
    if(dp[1]<0){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        //cout<<dp[1]+1<<endl;
     	vector<int >ans;
        int u=1;
        while(u!=n){
            ans.push_back(u);
            //cout<<u<<endl;
            u=par[u];
        }
        ans.push_back(n);
        cout<<ans.size()<<endl;
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }    
}   
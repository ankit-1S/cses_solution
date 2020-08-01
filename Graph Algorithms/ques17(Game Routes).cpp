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
vector<ll int >dp(N+1,0);
vector<bool >vis(N+1,false);

int n,m;
void dfs(int node){
   if(node==n){
       dp[node]=1;
   }
   vis[node]=true;
    for(auto j:graph[node]){
        if(!vis[j])
            dfs(j);
        dp[node]=(dp[node]+dp[j])%MOD;
        
    }
}
int main(){
    
    cin>> n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>> b;
        graph[a].push_back(b);
    }
    dfs(1);
   
    cout<<dp[1]<<endl;
    
}   
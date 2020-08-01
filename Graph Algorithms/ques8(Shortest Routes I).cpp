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
int main(){
    int n,m;
    cin>> n>>m;
    vector<vector<array<ll int,2>>>graph(N+1);
    vector<ll int >dist(N+1,1e14);
    
    for(int i=0;i<m;i++){
        ll int a,b,c;
        cin>>a>> b>>c;
       	graph[a].push_back({b,c});
    }
    vector<bool>vis(n+1,false);
    set<array<ll int,2>>s;
    s.insert({0,1});
    dist[1]=0;
    while(s.size()){
        auto it=s.begin();
        s.erase(it);
        ll int a=(*it)[1],c=(*it)[0];
        if(vis[a]!=true){
            vis[a]=true;
            for(auto j:graph[a]){
                ll int node=j[0],val=j[1];
                if(dist[node]>c+val){
                    dist[node]=c+val;
                    s.insert({dist[node],node});
                }
            }
        }
    }
    cout<<0<<" ";
    for(int i=2;i<=n;i++){
        cout<<dist[i]<<" ";
    }
    
    
}
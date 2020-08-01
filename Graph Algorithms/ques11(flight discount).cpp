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

void dijkstra(int u,vector<vector<array<ll int,2>>>&graph,vector<ll int >&dist){
	vector<bool>vis(N+1,false);
    set<array<ll int,2>>s;
    s.insert({0,u});
    dist[u]=0;
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
}

int main(){
    int n,m;
    cin>> n>>m;
    vector<vector<array<ll int,2>>>graph1(n+1),graph2(n+1);
    vector<ll int >dist1(n+1,1e14),dist2(n+1,1e14);    
    for(int i=0;i<m;i++){
        ll int a,b,c;
        cin>>a>> b>>c;
       	graph1[a].push_back({b,c});
        graph2[b].push_back({a,c});
    }
    dijkstra(1,graph1,dist1);
    dijkstra(n,graph2,dist2);
    ll int ans=1e14;
    for(int i=1;i<=n;i++){
        for(auto j:graph1[i]){
            ans=min(ans,dist1[i]+j[1]/2+dist2[j[0]]);
        }
        
    }
    cout<<ans<<endl;
    
    
}
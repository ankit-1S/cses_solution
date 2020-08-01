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
const int N=2501;
vector<bool>can_go1(N+1,false);
vector<bool>can_goN(N+1,false);
vector<int >graph[N+1];
void dfs(int i){
	can_go1[i]=true;
    for(auto j: graph[i]){
        if(!can_go1[j]){
             dfs(j);
        }
    }
}
void dfs2(int i){
	can_goN[i]=true;
    for(auto j: graph[i]){
        if(!can_goN[j]){
             dfs2(j);
        }
    }
}
int main(){
    int n,m;
    cin>> n>>m;
    vector<vector<ll int>>cost(n+1,vector<ll int>(n+1,-1e13));
    for(int i=0;i<m;i++){
        ll int a,b,c;
        cin>> a>>b>>c;
        graph[a].push_back(b);
        cost[a][b]=max(cost[a][b],c);
    }
    dfs(1);
    dfs2(N);
    vector<ll int >dis(n+1,-1e13);
    vector<bool>vis(n+1,false);
    set<array<ll int ,2>>que;
    que.insert({1,0});
    bool flag=false;
    while(!que.empty()){
        auto temp=*que.rbegin();
        ll int node=temp[0],val=temp[1];
        que.erase(temp);
        vis[node]=true;
        for(auto j:graph[node]){
            if(dis[j]<val+cost[node][j]  && !vis[j]){
                dis[j]=max(dis[j],val+cost[node][j]);
                que.insert({j,dis[j]});
            }
            else if(vis[j]){
                 if(val-dis[j]>0 &&can_go1[j] && can_goN[j]&&( cost[node][j]>0 || val-dis[j]>cost[node][j]) ){
                     cout<<-1<<endl;
                     return 0;
                 }
                 else if(val-dis[j]<0 && can_go1[j] && can_goN[j] &&abs(val-dis[j])<cost[node][j]){
                     cout<<-1<<endl;
                     return 0;
                 }
            }
        }
    }
    cout<<dis[n]<<endl;
    
    
}
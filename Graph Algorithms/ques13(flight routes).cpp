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
    int n,m,k;
    cin>> n>>m >>k;
    vector<vector<array<ll int,2>>>graph(n+1);
    for(int i=0;i<m;i++){
        ll int a,b,c;
        cin>> a>> b>> c;
        graph[a].push_back({b,c});
    }
    vector<vector<ll int >>dist(n+1);
    priority_queue<pair<ll int ,int >,vector<pair<ll int ,int >>,greater<pair<ll int ,int >>>p;
    p.push({0,1});
    while(!p.empty()){
        auto temp=p.top();
        p.pop();
        ll int node=temp.second,val=temp.first;
        if(dist[node].size()>=k)continue;
        dist[node].push_back(val);
        for(auto i:graph[node]){
            p.push({val+i[1],i[0]});
        }
    }
    for(auto i:dist[n]){
        cout<<i<<" ";
    }


}
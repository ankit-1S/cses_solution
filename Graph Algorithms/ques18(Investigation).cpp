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

vector<ll int >dp(N+1,0);
vector<bool >vis(N+1,false);



int main(){
    int n,m;
    cin>> n>>m;
    vector<vector<array<ll int,2>>>graph(N+1);
    for(int i=0;i<m;i++){
        ll int a,b,c;
        cin>>a>> b>> c;
        graph[a].push_back({b,c});
    }
    priority_queue<array<ll int,3>,vector<array<ll int ,3>>,greater<array<ll int ,3>>>p;
    
    
}   
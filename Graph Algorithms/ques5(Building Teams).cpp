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
bool flag=false;
void dfs(int i,int team){
    if(par[i]!=-1){
        if(team!=par[i]){
            flag=true;
            return;
        }
        return;
    }
    par[i]=team;
    for(auto j:graph[i]){
        dfs(j,!team);
    }
}
int main(){
    int n,m;
    cin>> n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i=1;i<=n;i++){
        
        if(par[i]==-1){
            dfs(i,0);
        }
    }
    
    if(flag){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        for(int i=1;i<=n;i++){
            cout<<par[i]+1<<" ";
        }
    }


    
}
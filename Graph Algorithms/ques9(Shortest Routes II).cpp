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
    int n,m,q;
    cin>> n>>m>> q;
    vector<vector<ll int>>cost(n+1,vector<ll int>(n+1,1e14));
    for(int i=0;i<m;i++){
        ll int a,b,c;
        cin>> a>> b>> c;
        cost[a][b]=min(cost[a][b],c);
        cost[b][a]=min(cost[b][a],c);
    }
    for(int v=1;v<=n;v++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j){
                  cost[i][j]=0;
                  continue;
                }
              cost[i][j]=min(cost[i][j],cost[i][v]+cost[v][j]);
            }
        }
    }
    for(int i=0;i<q;i++){
        int a,b;
        cin>> a>>b;
        if(cost[a][b]==1e14){
          cout<<-1<<endl;
        }  
        else
            cout<<cost[a][b]<<endl;
    }
    
}
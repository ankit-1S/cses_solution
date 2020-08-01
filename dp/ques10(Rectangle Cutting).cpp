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
vector<vector<int>> dp(501,vector<int>(501,INT_MAX));
int number(int n,int m){
    if(n==m)return 0;
    if(n==1)return m-1;
    if(m==1)return n-1;
    if(dp[n][m]!=INT_MAX)return dp[n][m];
    for(int i=1;i<=n/2;i++){
        dp[n][m]=min(dp[n][m],1+number(n-i,m)+number(i,m));
    }
    for(int i=1;i<=m/2;i++){
        dp[n][m]=min(dp[n][m],1+number(n,m-i)+number(n,i));
    }
    return dp[n][m];
}
int main(){
    int n,m;
    cin>> n>>m;
    
    
    cout<<number(n,m)<<endl;
    
}
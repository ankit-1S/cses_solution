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

ll int mul(ll int a,ll int b){
    return (a%MOD *( b%MOD))%MOD;
}
int main(){
    FAST
    int n;
    cin>> n;
    vector<ll int>dp(n+1);
    dp[0]=0;
    dp[1]=0;
    dp[2]=1;
    for(int i=3;i<=n;i++){
        dp[i]=mul(i-1,(dp[i-1]+dp[i-2])%MOD);
    }
    cout<<dp[n]<<endl;
}
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
ll int power(ll int a,ll int b){
    ll int ans=1;
    while(b){
        if(b%2)ans=ans*a;
        a=a*a;    
        a%=MOD;
        ans%=MOD;
        b=b/2;
    }
    return ans;
}
int main(){
    int n;
    cin>> n;
    ll int sum=n*(n+1);
    if(sum%4){
        cout<<0<<endl;
        return 0;
    }
    sum/=4;
    vector<ll int>dp(sum+1,0);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=sum;j>=i;j--){
            dp[j]=dp[j]+dp[j-i];
            dp[j]=dp[j]%MOD;
        }
    }
    //cout<<power(2,MOD-2)<<endl;
    cout<<(dp[sum]*power(2,MOD-2))%MOD<<endl;

}
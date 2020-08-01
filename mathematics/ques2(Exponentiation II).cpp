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
ll int power(ll int a,ll int b,int mod){
    ll int ans=1;
    while(b){
        if(b%2)ans=ans*a;
        ans=ans%mod;
        a=a*a;
        a=a%mod;
        b=b/2;
    }
    return ans%mod;
}
int main(){
    int t;
    cin>> t;
    while(t--){
        ll int a,b,c;
        cin>> a>> b>>c;
        ll int ans=power(b,c,MOD-1);
        cout<<power(a,ans,MOD)<<endl;
    }
}
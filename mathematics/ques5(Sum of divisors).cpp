
// problem set link -- https://cses.fi/problemset/  
 
/* UserName - ankit_S
  author- Ankit kumar
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std; 
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
//#define ll unsigned long long 
#define MOD 1000000007
 
ll int mul(ll int a,ll int b){
    ll ans=a%MOD *( b%MOD);
    return ans%MOD;
}
ll int divide(ll int a,ll int b){
    return mul(a,(MOD+1)/2);
}

int main(){
    ll int n;
    cin>> n;
    ll int ans=0;
    for(ll int i=1;i<=n;i++){
        ll int temp=n/i;
        ll int r=n/(n/i);
        ans+=n/i%MOD*( divide(mul(r,r+1),2)%MOD -divide(mul(i,i-1), 2)%MOD +MOD )%MOD;
        i=r;
 
    }
    cout<<ans%MOD<<endl;
}
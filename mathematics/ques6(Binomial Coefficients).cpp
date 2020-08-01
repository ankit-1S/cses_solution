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
vector<ll int >fac(1e6+2);
ll int mul(ll int a,ll int b){
    return (a%MOD *( b%MOD))%MOD;
}
void fact(){
    fac[0]=1;
    for(int i=1;i<1e6+2;i++){
        fac[i]=fac[i-1]*i;
        fac[i]%=MOD;
    }
}
ll int inverse(ll int a,ll int b){
    int ans=1;
    while(b){
        if(b%2)ans=mul(ans,a);
        b=b/2;
        a=mul(a,a);
    }
    return ans;
}
ll int divide(ll int a,ll int b){
    ll int ans= inverse(b,(MOD-2));
    return mul(ans,a);
}
int main(){
    int n;
    cin>>n;
    fact();
    while(n--){
        ll int a,b;
        cin>> a>>b;
        ll int x=fac[a],y=fac[b],z=fac[a-b];
        z=mul(y,z);
        cout<<divide(x,z)<<endl;
    }

}
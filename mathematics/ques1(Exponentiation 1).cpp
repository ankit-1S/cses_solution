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
    int t;
    cin>> t;
    while(t--){
        ll int a,b;
        cin>> a>> b;
        ll int ans=1;
        while(b){
            if(b%2)ans=ans*a;
            ans=ans%MOD;
            a=a*a;
            a=a%MOD;
            b=b/2;
        }
        cout<<ans<<endl;
    }
}
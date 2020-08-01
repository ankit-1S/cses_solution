// problem set link -- https://cses.fi/problemset/  
//Question-9;

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
    FAST
    int n;
    cin>> n;
    ll int a=2;
    ll int ans=1;
    while(n>0){
        if(n%2)ans*=a;
        a=a*a;
        a=a%MOD;
        ans=ans%MOD;
        n=n/2;
        
    }
    cout<<ans<<endl;

}


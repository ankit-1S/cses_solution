// problem set link -- https://cses.fi/problemset/  
//Question-10;

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
    ll int n;
    cin>> n;
    ll int ans=0;
    for(ll int i=5;i<=n;i=i+5){
        ll int temp=i;
        while(temp%5==0){
            ans++;
            temp=temp/5;
        }
    }
    
    cout<<ans<<endl;

}


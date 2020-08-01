// problem set link -- https://cses.fi/problemset/  
//Question-24;


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
    ll int n;
    cin>> n;
    vector<ll int>arr(n);
    for(ll int i=0;i<n;i++){
        cin>> arr[i];
    }
    ll int ans=INT_MIN,curr=0;
    for(auto i :arr){
        curr+=i;
        ans=max(ans,curr);
        curr=max(0ll,curr);
    }
    cout<<ans<<endl;
  
}
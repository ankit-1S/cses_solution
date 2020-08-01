// problem set link -- https://cses.fi/problemset/  
//Question-25;


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
    sort(arr.begin(),arr.end());
    ll int mid=arr[n/2];
    ll int ans=0;
    for(auto i :arr){
        ans+=abs(mid-i);
    }
    cout<<ans<<endl;
  
}
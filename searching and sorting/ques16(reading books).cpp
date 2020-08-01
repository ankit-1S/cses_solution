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
    int n;
    cin>> n;
    vector<ll int>arr(n);
    ll int sum=0;
    for(int i=0;i<n;i++){
        cin>> arr[i];
        sum+=arr[i];
    }
    sort(arr.begin(),arr.end());
    cout<<max(sum,2*arr[n-1])<<endl;

}
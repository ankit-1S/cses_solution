// problem set link -- https://cses.fi/problemset/  
//Question-26;


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
    map<ll int,ll int>m;
    for(ll int i=0;i<n;i++){
        cin>> arr[i];
    }
    ll int ans=0;
    ll int i=0;
    for(ll int j=0;j<n;j++){
        if(m.find(arr[j])!=m.end()){
             i=max(i,m[arr[j]]+1);
        }
        ans=max(ans,j-i+1);
        m[arr[j]]=j;
        //cout<<i<<" "<<j<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
  
}
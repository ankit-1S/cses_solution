// problem set link -- https://cses.fi/problemset/  
//Question-18;
// Apartments

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
    ll int n,m,k;
    cin>> n>> m>>k;
    vector<ll int >arr(n),apart(m);
    for(ll int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(ll int i=0;i<m;i++){
        cin>>apart[i];
    }
    sort(arr.begin(),arr.end());
    sort(apart.begin(),apart.end());
    ll int i=0,j=0;
    ll int ans=0;
    while(i<n && j<m){
        if(arr[i]<=apart[j]){
            if(arr[i]>=apart[j]-k){
                i++;
                j++;
                ans++;
            }
            else{
                i++;
            }
        }
        else{
            if(arr[i]<=apart[j]+k){
                i++;
                j++;
                ans++;
            }
            else{
                j++;
            }
        }
        //cout<<i<<" "<<j<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
}
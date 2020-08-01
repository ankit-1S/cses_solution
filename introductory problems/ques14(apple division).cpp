// problem set link -- https://cses.fi/problemset/  
//Question-14;

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
    vector<ll int> arr(n);
    ll int total=0;
    for(int i=0;i<n;i++){
      cin>> arr[i];
      total+=arr[i];
    }
    ll int ans=INT_MAX;
    for(ll int i=0;i< 1<<n;i++){
      ll curr=0;
      for(int j=0;j<n;j++){
        if(i& 1<<j){
          curr+=arr[j];
        }
        
      }
      ans=min(ans,abs(total-2*curr));
    }
    cout<<ans<<endl;
}
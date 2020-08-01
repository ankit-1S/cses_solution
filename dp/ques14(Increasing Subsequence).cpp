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
    set<ll int>s;
    vector<ll int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int ans=1;
    for(int i=0;i<n;i++){
      auto it=s.lower_bound(arr[i]);
      if(it==s.end()){
        s.insert(arr[i]);
      }
      else{
        s.erase(*it);
        s.insert(arr[i]);
      } 
      if(ans<s.size())
        ans=s.size();
    }
    cout<<ans<<endl;

}
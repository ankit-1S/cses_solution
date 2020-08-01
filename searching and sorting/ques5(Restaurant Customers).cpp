// problem set link -- https://cses.fi/problemset/  
//Question-21;
// restaurant customers

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
    cin>>n;
    vector<pair<ll int ,int >>arr;
    for(int i=0;i<n;i++){
        ll int a,b;
        cin>> a>>b;
        arr.push_back({a,1});
        arr.push_back({b,-1});
    }
    sort(arr.begin(),arr.end());
    ll int ans=0,curr=0;
    for(auto i : arr){
        curr+=i.second;
        ans=max(ans,curr);
    }
    cout<<ans<<endl;
}
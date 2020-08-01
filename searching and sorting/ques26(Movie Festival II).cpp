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
    ll int n,k;
    cin>>n>>k;
    vector<array<ll int ,2>>arr(n),copy;
    set<array<ll int,2>> s;
    for(int i=0;i<n;i++){
        ll int a,b;
        cin>> arr[i][1]>> arr[i][0];
    }
    sort(arr.begin(),arr.end());
    ll int ans=0;
    for(int i=0;i<n;i++){
        auto it =s.upper_bound({arr[i][1]});
        if(it!=s.begin()){
            it--;
            s.erase(*it);
        }
        
        if(s.size()<k){
            ans++;
            s.insert({arr[i][0],i});
        }
    }
    cout<<ans<<endl;
   

}
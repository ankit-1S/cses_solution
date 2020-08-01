// problem set link -- https://cses.fi/problemset/  

/* UserName - ankit_S
  author- Ankit kumar
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll unsigned long long 
#define MOD 1000000007
int main(){
    int n;
    cin>>n;
    array<ll int ,3>arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i][1]>>arr[i][0]>>arr[i][2];
    }
    sort(arr,arr+n);
    ll int ans=0;
    set<array<ll int ,2>>s;
    for(int i=0;i<n;i++){
        auto it=s.lower_bound({arr[i][1]});
        if(it!=s.begin()){
            it--;
            ans=max(ans,(*it)[1]+arr[i][2]);
        }
        else{
            ans=max(ans,arr[i][2]);
        }
        s.insert({arr[i][0],ans});
    }
    cout<<ans<<endl;

}
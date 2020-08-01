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
    cin>>n;
    vector<array<int ,2>>arr(n);
    for(int i=0;i<n;i++){
        cin>> arr[i][0]>> arr[i][1];
    }
    sort(arr.begin(),arr.end());
    ll int time=0,ans=0;
    for(int i=0;i<n;i++){
        time+=arr[i][0];
        ans+=arr[i][1]-time;
    }
    cout<<ans<<endl;

}
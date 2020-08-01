// problem set link -- https://cses.fi/problemset/  
//Question-22;


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
    vector<vector< ll int >>arr(n,vector<ll int>(2));
    for(int i=0;i<n;i++){
        cin>> arr[i][1]>>arr[i][0];
    }
    sort(arr.begin(),arr.end());
    ll int ans=0,curr=0;
    for(auto i : arr){
        if(i[1]>=curr){
            ans++;
            curr=i[0];
        }
        
    }
    cout<<ans<<endl;
}
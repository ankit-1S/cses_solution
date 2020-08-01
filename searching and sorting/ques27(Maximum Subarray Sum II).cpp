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
    int n,a,b;
    cin>>n>> a>>b;
    vector<ll int>arr(n),sum(n);
    for(int i=0;i<n;i++){
        cin>> arr[i];
        if(i==0)sum[i]=arr[i];
        else
            sum[i]=sum[i-1]+arr[i];
            //cout<<sum[i]<<" ";
    }
   // cout<<endl;
    ll int ans=-1e15;
    set<array<ll int,2>>s;
    for(int i=0;i<n;i++){
        if(i==a-1)s.insert({0,-1});
        if(i>a-1){
            s.insert({sum[i-a],i-a});
        }
        if(s.size()){
            ans=max(ans,sum[i]-(*s.begin())[0]);
        }
        if(i==b-1)s.erase({0,-1});
        if(i>=b){
            s.erase({sum[i-b],i-b});
        }
    }
    cout<<ans<<endl;
    

}
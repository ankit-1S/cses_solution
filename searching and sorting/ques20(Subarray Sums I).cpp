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
    ll int n,x;
    cin>> n>> x;
    vector<ll int >arr(n);
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    map<ll int,int>m;
    ll int ans=0,sum=0;
    m[0]=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(m.find(sum-x)!=m.end()){
            ans++;
        }
        m[sum]=i+1;
    }
    cout<<ans<<endl;
   
    
}
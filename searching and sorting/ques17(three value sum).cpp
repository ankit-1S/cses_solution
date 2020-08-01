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
    cin>> n>>x;
    vector<ll int>arr(n);
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    map<ll int ,ll int>m;
    for(int i=0;i<n;i++){
        ll int curr=x-arr[i];
        for(int j=i+1;j<n;j++){
            if(m.find(curr-arr[j])!=m.end()){
                cout<<m[curr-arr[j]]<<" "<<i+1<<" "<<j+1<<endl;
                return 0;
            }
        }
        m[arr[i]]=i+1;
    }
    cout<<"IMPOSSIBLE"<<endl;

}
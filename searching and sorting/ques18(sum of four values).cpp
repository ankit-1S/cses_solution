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
    map<ll int,array<ll int,2>>m;
    for(int i=0;i<n;i++){
        int curr=x-arr[i];
        for(int j=i+1;j<n;j++){
            if(m.find(curr-arr[j])!=m.end()){
                cout<<m[curr-arr[j]][0]<<" "<<m[curr-arr[j]][1]<<" "<<i+1<<" "<<j+1<<endl;
                return 0;
            }
        }
        for(int k=0;k<i;k++){
            m[arr[k]+arr[i]]={k+1,i+1};
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}
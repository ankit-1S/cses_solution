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
    ll int n;
    cin>> n;
    vector<ll int>arr(n+1,0);
    for(int i=1;i<=n;i++){
        ll int num=0;
        for(int j=1;j<=6;j++){
            if(i-j>0 ){
                num+=arr[i-j];
            }
        }
        if(i<7)num++;
        arr[i]=num%MOD;
    }
    cout<<arr[n]<<endl;
}
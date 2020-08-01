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
    int x;
    cin>> n>>x;
    vector<int>coin(n);
    for(int i=0;i<n;i++)cin>> coin[i];
    vector<ll int>arr(x+1,INT_MAX);
    arr[0]=0;
    for(int i=1;i<=x;i++){
        for(int j=0;j<n;j++){
            if(coin[j]<=i){
                arr[i]=min(arr[i],1+arr[i-coin[j]]);
            }    
        }
    }
    cout<<((arr[x]!=INT_MAX) ? arr[x]:-1)<<endl;

}
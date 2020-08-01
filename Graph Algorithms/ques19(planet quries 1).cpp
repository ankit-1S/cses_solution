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
const int N=2e5;

int main(){
    int n,q;
    cin>> n>>q;
    int arr[30][n];
    for(int i=0;i<n;i++){
        cin>>arr[0][i];
        arr[0][i]--;
    }
    for(int i=1;i<30;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=arr[i-1][arr[i-1][j]];
        }
    }
    for(int i=0;i<q;i++){
        ll int x,k;
        cin>>x>>k;
        x--;
        for(int i=0;i<30;i++){
            if(k>>i&1){
                x=arr[i][x];
            }
        }
        cout<<x+1<<endl;
        
    }
    
    
}   
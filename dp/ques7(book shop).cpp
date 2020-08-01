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
    int n,x;
    cin>>n>>x;
    vector<int >price(n),page(n),dp(x+1,0);
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    for(int i=0;i<n;i++){
        cin>>page[i];
    }
    for(int i=0;i<n;i++){
        for(int j=x;j>0;j--){
            if(j>=price[i]){
                dp[j]=max(dp[j],page[i]+dp[j-price[i]]);
            }
        }
    }
    cout<<dp[x]<<endl;
}
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
    cin>> n;
    vector<int >arr(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>> arr[i];
        sum+=arr[i];
    }
    vector<bool>dp(sum+1,false);
    dp[0]=true;
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=sum;j>=arr[i];j--){
            if(!dp[j]){
                dp[j]=dp[j-arr[i]];
                if(dp[j])cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    for(int i=1;i<=sum;i++){
        if(dp[i])
            cout<<i<<" ";     
    }
}
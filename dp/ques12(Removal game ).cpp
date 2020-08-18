/* UserName - ankit_S
  author -Ankit kumar
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
const ll int MOD=1e9+7;

int main()
{
    FAST
    ll int n;
    cin>> n;
    vector<ll int> arr(n);
    for(int i=0;i<n;i++){
    	cin>> arr[i];
   	}
    ll int dp[n][n][2];
    ll int ans=0;
    for(int len=1;len<=n;len++){
        for(int i=0;i<n;i++){
            int j=len+i-1;
            if(j>=i && j<n){
                if(i==j){
                    dp[i][j][0]=arr[i];
                    dp[i][j][1]=0;
                }
                else{
                    ll int x=arr[i]+dp[i+1][j][1];
                    ll int y=arr[j]+dp[i][j-1][1];
                    //cout<<x<<" "<< y<<" "<<len<<i<<" "<<j<<" "<< endl;
                    dp[i][j][0]=max(x,y);
                    ans=max(ans,dp[i][j][0]);
                    if(dp[i][j][0]==x)dp[i][j][1]=dp[i+1][j][0];
                    else dp[i][j][1]=dp[i][j-1][0];
                }
            }
        }
    }
    cout<<dp[0][n-1][0] <<endl;
    return 0;
}

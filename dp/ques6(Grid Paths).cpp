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
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        arr[i]=s;
    }
   
    vector<vector<ll int >>ans(n+1,vector<ll int>(n+1,0));
    
    if(arr[0][0]=='.')ans[1][1]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(arr[i-1][j-1]=='.'){
                if(i!=1 || j!=1)
                    ans[i][j]=ans[i-1][j]+ans[i][j-1];
                ans[i][j]%=MOD;
            }
        }
    }

    cout<<ans[n][n]<<endl;
    
}
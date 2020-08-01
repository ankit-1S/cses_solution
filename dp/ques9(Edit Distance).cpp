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
    string s1,s2;
    cin>>s1>> s2;
    int n=s1.size(),m=s2.size();
    vector<vector<int >>ans(n+1,vector<int>(m+1,0));
    for(int i=0;i<=n;i++)ans[i][0]=i;
    for(int i=0;i<=m;i++)ans[0][i]=i;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                ans[i][j]=ans[i-1][j-1];
            }
            else{
                ans[i][j]=1+min(ans[i-1][j],min(ans[i][j-1],ans[i-1][j-1]));
            }
        }
    }
    cout<<ans[n][m]<<endl;
}
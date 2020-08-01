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
const int N=1000;
vector<string>arr(N);
int n,m;
bool valid(int i,int j){
    return (i>=0)&& (i<n) && (j>=0)&& (j<m) &&(arr[i][j]=='.');
}
void dfs(int i,int j){
    arr[i][j]='#';
    if(valid(i-1,j))dfs(i-1,j);
    if(valid(i+1,j))dfs(i+1,j);
    if(valid(i,j-1))dfs(i,j-1);
    if(valid(i,j+1))dfs(i,j+1);
}
int main(){
    
    cin>> n>>m;
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int  ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(valid(i,j)){
                ans++;
                dfs(i,j);
            }
        }
    }
    cout<<ans<<endl;
 
}
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
    vector<int> arr(1e6,0);
    unordered_map<int ,int>m;
    int num=-1,ans=1;
    for(int i=0;i<n;i++){
        int x;
        cin>> x;
        arr[x]++;
        num=max(num,x);
    }

    for(int i=1;i<=num;i++){
        int  curr=0;
        for(int j=i;j<=num;j+=i){
            curr+=arr[j];
        }
        //cout<<curr<<" "<<i<<endl;
        if(curr>1){
            ans=max(ans,i);
        }
    }
    cout<<ans<<endl;
}
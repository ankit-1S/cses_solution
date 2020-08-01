// problem set link -- https://cses.fi/problemset/  
//Question-23;


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
    ll int n,x;
    cin>> n>>x;
    map<ll int ,ll int>m;
    vector<int>ans(2,-1);
    for(ll int i=0;i<n;i++){
        ll int  num;
        cin>> num;
        if(m.find(x-num)!=m.end()){
            ans[0]=m[x-num];
            ans[1]=i+1;
        }
        else{
            m[num]=i+1;
        }
    }
    if(ans[0]==-1){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
}
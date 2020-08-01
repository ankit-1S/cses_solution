// problem set link -- https://cses.fi/problemset/  
//Question-27;


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
    ll int n;
    cin>> n;
    vector<ll int>ans;
    
    for(ll int i=0;i<n;i++){
		ll int x;
        cin>> x;
        auto it=upper_bound(ans.begin(),ans.end(),x);
        if(it==ans.end()){
            ans.push_back(x);
        }
        else{
            *it=x;
        }   
    }
    cout<<ans.size()<<endl;
  
}
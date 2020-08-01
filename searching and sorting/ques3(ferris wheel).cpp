// problem set link -- https://cses.fi/problemset/  
//Question-19;
// Ferris Wheel

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
    FAST
    ll int n,x;
    cin>> n>> x;
    vector<ll int >weight(n);
    for(ll int i=0;i<n;i++){
        cin>>weight[i];
    }
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    sort(weight.begin(),weight.end());
    ll int j=n-1;
    ll int ans=0;
    for(ll int i=0;i<j;i++){  
        while(i<j && weight[i]+weight[j]>x){
            j--;
        }
        if(i>=j){
            break;
        }
        ans++;
        j--;    
        
    }    
    ans=n-ans;
    cout<<ans<<endl;
}
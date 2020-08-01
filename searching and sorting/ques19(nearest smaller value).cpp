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
    stack<array<ll int,2>> s;
    s.push({0,0});
    for(int i=0;i<n;i++){
        ll int x;
        cin>> x;
        while(s.top()[0]>=x){
            s.pop();
        }
        cout<<s.top()[1]<<" ";
        s.push({x,i+1});
    }

}
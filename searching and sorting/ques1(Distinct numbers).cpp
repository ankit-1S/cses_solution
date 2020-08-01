// problem set link -- https://cses.fi/problemset/  
//Question-17;
// distinct numbers
 
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
    int n;
    cin>> n;
    map<ll int ,ll int >s;
    for(int i=0;i<n;i++){
        ll int x;
        cin>> x;
        s[x]++;
    }
    cout<<s.size()<<endl;
    
}
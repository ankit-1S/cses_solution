// problem set link -- https://cses.fi/problemset/  
//Question-11;

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
    int t;
    cin>> t;
    while(t--){
        ll int a,b;
        cin>> a>> b;
        ll int x,y;
        x=max(a,b);
        y=min(a,b);
        if(x>2*y){
            cout<<"NO"<<endl;
            continue;
        }
        if((x+y)%3){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    

}


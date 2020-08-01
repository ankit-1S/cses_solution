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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;
        int cnt=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                cnt++;
                int j=n/i;
                if(j!=i && n%j==0)
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
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
    FAST
    string s,ans="";
    cin>>s;
    int a=-1,b=-1,c=-1,d=-1;
    for(auto i:s){
        if(i=='A')a=1;
        else if(i=='C')b=1;
        else if(i=='G')c=1;
        else d=1;
        if(a==1 && b==1 && c==1 && d==1){
            ans+=i;
            a=b=c=d=-1;
        }
    }
    if(a==-1)ans+="A";
    else if(b==-1)ans+="C";
    else if(c==-1)ans+="G";
    else ans+="T";
    cout<<ans<<endl;

}
// problem set link -- https://cses.fi/problemset/  
//Question-6;



/* UserName - ankit_S
  author- Ankit kumar
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 

int main(){
    FAST
    int n;
    cin>> n;
    while(n--){
        unsigned ll int x,y;
        cin>> x>>y;
        if(y>=x){
            if(y%2){
                cout<<y*y-(x-1)<<endl;
            }
            else{
                y--;
                cout<<y*y+x<<endl;
            }
        }
        else{
            if(x%2){
                x--;
                cout<<x*x+y<<endl;
            }
            else{
                cout<<x*x-(y-1)<<endl;
            }
        }
    }
   

}


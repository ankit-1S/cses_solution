// problem set link -- https://cses.fi/problemset/  
//Question-20;

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
    int n,m;
    cin>> n>> m;
    set<array<int,2>>tic;
    for(int i=0;i<n;i++){
        ll int x;
        cin>> x;
        tic.insert({x,i});
    }
    

    for(int i=0;i<m;i++){
        ll int x;
        cin>> x;
        auto it=tic.lower_bound({x,0});
        if((*it)[0]==x){
            cout<<(*it)[0]<<endl;
            tic.erase(it);
        }
        else{
            if(it==tic.begin()){
                cout<<-1<<endl;
            }
            else{
                it--;
                cout<<(*it)[0]<<endl;
                tic.erase(it);
            }
        }
    }

}
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
    ll int x,n;
    cin>> x>> n;
    set<ll int >s;
    s.insert(0);
    s.insert(x);
    map<ll int,ll int>m;
    m[x]=1;    
    for(ll int i=0;i<n;i++){
		ll int a;
        cin>> a;
        auto it=s.lower_bound(a);
        int right=*(it);
        int left=*prev(it);
        s.insert(a);
        m[right-left]--;
        if(m[right-left]==0){
            m.erase(right-left);
        }
        m[right-a]++;
        m[a-left]++;
        auto it2=m.end();
        cout<<(*prev(it2)).first<<" ";
    }
   
  
}
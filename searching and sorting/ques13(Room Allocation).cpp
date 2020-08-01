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
    ll int n;
    cin>>n;
    vector<array<ll int ,3>>arr(n),copy;
    set<array<ll int,2>> s;
    for(int i=0;i<n;i++){
        ll int a,b;
        cin>> arr[i][1]>> arr[i][0];
        arr[i][2]=i;
    }
    sort(arr.begin(),arr.end());
    vector<int >ans(n);
    for(int i=0;i<n;i++){
        auto it =s.lower_bound({arr[i][1]});
        if(it!=s.begin()){
            it--;
            ans[arr[i][2]]=(*it)[1];
            s.erase(*it);
        }
        else{
            ans[arr[i][2]]=s.size();
        }
        s.insert({arr[i][0],ans[arr[i][2]]});
    }
    cout<<s.size()<<endl;
   
    for(auto i: ans){
       cout<<i+1<<" ";
    }  
 
}
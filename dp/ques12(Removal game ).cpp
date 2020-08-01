// problem set link -- https://cses.fi/problemset/  

/* UserName - ankit_S
  author- Ankit kumar
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll unsigned long long 
#define MOD 1000000007
vector<ll int>arr(5001);
int fun(int low,int high){
    if(low==high){
        return arr[low];
    }
    if(low>high){
        return 0;
    }
    return max( arr[low]+min( fun(low+2,high),fun(low+1,high-1) ) , arr[high]+min(fun(low+1,high-1),fun(low,high-2)));
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<fun(0,n-1);

}
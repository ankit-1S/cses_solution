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
    unsigned ll int n,t;
    cin>>n>>t;
    vector<ll int>arr(n);
    for(ll int i=0;i<n;i++)
        cin>> arr[i];
    unsigned ll int low=1,high=1e18,ans=1;

    while(low<high){
        unsigned ll int mid=(low+high)/2;
        unsigned ll int items=0;
        for(ll int i=0;i<n;i++){
            items+=mid/arr[i];
        }
        if(items<t){
            low=mid+1;
            
        }
        else{
            high=mid;
        }
    }
    cout<<low<<endl;   
}
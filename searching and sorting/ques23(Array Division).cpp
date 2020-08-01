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
ll int n,k;
vector<ll int >arr(1e7);

bool possible(ll int sum){
    ll int curr=0,cnt=0;
    for(int i=0;i<n;i++){
    	if(arr[i]>sum){
            return false;
        }
        if(curr+arr[i]>sum){
            curr=arr[i];
            cnt++;
        }
        else{
            curr+=arr[i];
        }
    }
    if(curr<=sum)cnt++;
    if(cnt>k)return false;
    return true;
}
int main(){
    cin>> n>> k;
    ll int sum=0;
    for(int i=0;i<n;i++){
        cin>> arr[i];
        sum+=arr[i];
    }
    ll int low=1,high=sum;
    while(low<high){
        ll int mid=(low+high)/2;
        //cout<<low<<" "<<mid<<" "<<high<<endl;
        
        
        if(!possible(mid)){
            low=mid+1;
        }
        else{
            high=mid;
        }
       // cout<<low<<" "<<mid<<" "<<high<<endl;
    }
   
    cout<<low<<endl;
}
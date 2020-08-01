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

int max_digit(int n){
    int val=-1;
    while(n){

        val=max(val,n%10);
        n=n/10;
    }
    return val;
}
int main(){
    int n;
    cin>> n;
    vector<ll int>arr(n+1,0);
    arr[0]=0;
    for(int i=1;i<=n;i++){
        arr[i]=1+arr[i-max_digit(i)];
    }
    cout<<arr[n]<<endl;

}
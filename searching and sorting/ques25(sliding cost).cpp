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
    int n,k;
    cin>> n>> k;
    set<array<ll int,2>>second;
    set<array<ll int ,2>,greater<array<ll int ,2>>> first;
    vector<int>arr(n);
    ll int first_sum=0,second_sum=0;
    for(int i=0;i<k-1;i++){
        cin>> arr[i];
        first.insert({arr[i],i});
        first_sum+=arr[i];
    }
    for(int i=0;i<k/2;i++){
    	auto it=first.begin();
        second.insert(*it);
        second_sum+=(*it)[0];
        first.erase(it);
        first_sum-=(*it)[0];
    }
   // cout<<first.size()<<second.size()<<endl;
    for(int i=k-1;i<n;i++){
        cin>> arr[i];
        if(first.size()>second.size()){
            if((*first.begin())[0]>arr[i]){
                auto it=first.begin();
        		second.insert(*it);
                second_sum+=(*it)[0];
       			first.erase(it);
                first_sum-=(*it)[0];
                first.insert({arr[i],i});
                first_sum+=arr[i];
            }
            else{
                second.insert({arr[i],i});
                second_sum+=arr[i];
            }
        }
        else if(first.size()==second.size()){
            if((*first.begin())[0]>arr[i]){
                first.insert({arr[i],i});
                first_sum+=arr[i];
            }
            else{
                second.insert({arr[i],i});
                second_sum+=arr[i];
            }
        }
        else{
            if((*second.begin())[0]>=arr[i]){
                first.insert({arr[i],i});
                first_sum+=arr[i];
            }
            else{
                auto it=second.begin();
        		first.insert(*it);
                first_sum+=(*it)[0];
       			second.erase(it);
                second_sum-=(*it)[0];
                second.insert({arr[i],i});
                second_sum+=arr[i];
            }
        }
        ll int med;
        if(second.size()>first.size()){
            med=(*second.begin())[0];
        }
        else{
            med=(*first.begin())[0];
        }

        cout<<first.size()*med - first_sum + second_sum-second.size()*med<<" ";
        if(first.erase({arr[i-k+1],i-k+1})){
            first_sum-=arr[i-k+1];
        }
        if(second.erase({arr[i-k+1],i-k+1})){
            second_sum-=arr[i-k+1];
        }   
    }
}
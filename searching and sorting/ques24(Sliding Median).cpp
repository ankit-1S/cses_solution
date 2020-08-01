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
    int n,k;
    cin>> n>> k;
    set<array<ll int,2>>second;
    set<array<ll int ,2>,greater<array<ll int ,2>>> first;
    vector<int>arr(n);
    for(int i=0;i<k-1;i++){
        cin>> arr[i];
        first.insert({arr[i],i});
    }
    for(int i=0;i<k/2;i++){
    	auto it=first.begin();
        second.insert(*it);
        first.erase(it);
    }
   // cout<<first.size()<<second.size()<<endl;
    for(int i=k-1;i<n;i++){
        cin>> arr[i];
        if(first.size()>second.size()){
            if((*first.begin())[0]>arr[i]){
                auto it=first.begin();
        		second.insert(*it);
       			first.erase(it);
                first.insert({arr[i],i});
            }
            else{
                second.insert({arr[i],i});
            }
        }
        else if(first.size()==second.size()){
            if((*first.begin())[0]>arr[i]){
                first.insert({arr[i],i});
            }
            else{
                 second.insert({arr[i],i});
            }
        }
        else{
            if((*second.begin())[0]>=arr[i]){
                first.insert({arr[i],i});
            }
            else{
                auto it=second.begin();
        		first.insert(*it);
       			second.erase(it);
                second.insert({arr[i],i});
            }
        }
       
        if(second.size()>first.size()){
            cout<<(*second.begin())[0]<<" ";
        }
        else
        	cout<<(*first.begin())[0]<<" ";
        first.erase({arr[i-k+1],i-k+1});
        second.erase({arr[i-k+1],i-k+1});
        
    }


}
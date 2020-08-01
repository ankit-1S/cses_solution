// problem set link -- https://cses.fi/problemset/  
//Question-12;

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
    FAST
    string s;
    cin>> s;
    vector<int>freq(26,0);
    int n=s.length();
    for(auto i: s){
        freq[i-'A']++;
    }
    int odd=0;
    for(auto i:freq){
        if(i%2)odd++;
    }
    if(odd>1 || (odd==1 && n%2==0)){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    string mid="";
    string ans="";
    for(int i=0;i<26;i++){
        if(freq[i]%2==1){
            mid=i+'A';
            freq[i]--;
        }
        
        for(int j=0;j<freq[i]/2;j++)
            ans+=i+'A';
        
    }
    cout<<ans<<mid;
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;


}


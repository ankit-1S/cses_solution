// problem set link -- https://cses.fi/problemset/  
//Question-13;

/* UserName - ankit_S
  author- Ankit kumar
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define MOD 1000000007
set<string> ans;
void all_per(string s, int low, int high){
    if(low==high)
        ans.insert(s);
    if(low<high){
        for(int i=low;i<=high;i++){
            char temp=s[i];
            s[i]=s[low];
            s[low]=temp;
            all_per(s,low+1,high);
        }
        
    }
    
}
int main(){
    FAST
    string s;
    cin>> s;
    all_per(s,0,s.length()-1);    
    cout<<ans.size()<<endl;
    for(auto i: ans){
        cout<< i<<endl;
    }

}


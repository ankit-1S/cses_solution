// problem set link -- https://cses.fi/problemset/  
/*You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.

Constraints
1≤n≤106
Example

Input:
ATTCGGGA

Output:
3
*/


/* UserName - ankit_S
  author- Ankit kumar
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 

int main(){
    FAST
    string s;
    cin>> s;
    int ans=1;
    int j=0;
    int i=0;
    for(i=0;i<s.length();i++){
        if(s[i]!=s[j]){
            ans=max(ans,i-j);
            j=i;
        }
    }
    cout<<max(ans,i-j)<<endl;

}


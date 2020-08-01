// problem set link -- https://cses.fi/problemset/  
/*You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each turn, you may increase the value of any element by one. What is the minimum number of turns required?

Input

The first input line contains an integer n: the size of the array.

Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

Output

Print the minimum number of turns.

Constraints
1≤n≤2⋅105
1≤xi≤109
Example

Input:
5
3 2 5 1 7

Output:
5
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
    int n;
    cin>> n;
    ll int ans=0;
    ll int prev;
    for(int i=0;i<n;i++){
        ll int x;
        cin>> x;
        if(i>0){
            if(x<prev){
                ans+=prev-x;
                x=prev;
            }
        }
        prev=x;
    }
    cout<<ans<<endl;

}


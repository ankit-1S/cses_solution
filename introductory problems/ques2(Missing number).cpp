// problem set link -- https://cses.fi/problemset/  
/*You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints
2≤n≤2⋅105
Example

Input:
5
2 3 1 5

Output:
4
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
    ll int n;
    cin>>n;
    ll sum=0;
    for(int i=0;i<n-1;i++){
        int  num;
        cin>>num;
        sum+=num;
    }
    ll actual_sum=(n*(n+1))/2;
    cout<<actual_sum-sum<<endl;

}


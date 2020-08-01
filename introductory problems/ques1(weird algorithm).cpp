// problem set link -- https://cses.fi/problemset/  
/*Time limit: 1.00 s Memory limit: 512 MB
Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
3→10→5→16→8→4→2→1

Your task is to simulate the execution of the algorithm for a given value of n.

Constraints
1≤n≤106
Example

Input:
3

Output:
3 10 5 16 8 4 2 1
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
    cout<<n<<" ";
    while(n!=1 && n!=0){
        if(n%2){
            n=n*3+1;

        }
        else {
            n=n/2;
        }
        cout<<n<<" ";
    }
    

}


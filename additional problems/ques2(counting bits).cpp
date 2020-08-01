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
int main() {
    long long n, ans;
    int i;
    
    scanf("%lld", &n);
    ans = 0;
    for (i = 0; 1LL << i <= n; i++) {
        ans += n >> (i + 1) << i;
        if (n & 1LL << i)
            ans += (n & (1LL << i) - 1) + 1;
    }
    printf("%lld\n", ans);
    return 0;
}
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
ll const N = 1e5 + 5, M = 1e2 + 5;
ll n, m;
ll dp[N][M];
ll a[N];

int main()
{
    FAST
    cin >> n >> m;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    if (a[1] == 0)
        for (int i = 1; i <= m; i++)
            dp[1][i] = 1;
    else
        dp[1][a[1]] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            if (a[i] == 0 || j == a[i])
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1] + dp[i - 1][j] + dp[i - 1][j + 1]) % MOD;
    }
    ll ans = 0;
    for (int i = 1; i <= m; i++)
    {
        ans += dp[n][i];
        ans %= MOD;
    }
    cout << ans;
}
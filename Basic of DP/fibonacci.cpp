#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 1e6 + 5;
ll dp[N];
ll fac(ll n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    ll ans = fac(n - 1) + fac(n - 2);
    dp[n] = ans;
    return ans;
}
int main()
{
    ll n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << fac(n) << endl;
    return 0;
}

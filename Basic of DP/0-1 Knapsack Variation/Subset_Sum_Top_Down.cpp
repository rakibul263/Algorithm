#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005]; // depends on value of n and s;
bool subset_sum(int n, int a[], int s)
{
    // base case
    if (n == 0)
    {
        if (s == 0)
            return true;
        else
            return false;
    }
    if (dp[n][s] != -1)
        return dp[n][s];
    if (a[n - 1] <= s)
    {
        bool op_1 = subset_sum(n - 1, a, s - a[n - 1]);
        bool op_2 = subset_sum(n - 1, a, s);
        return dp[n][s] = op_1 || op_2;
    }
    else
    {
        bool op_2 = subset_sum(n - 1, a, s);
        return dp[n][s] = op_2;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    if (subset_sum(n, a, x))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

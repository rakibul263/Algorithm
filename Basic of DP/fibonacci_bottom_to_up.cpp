#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int ara[n];
    ara[0] = 0;
    ara[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        ara[i] = ara[i - 1] + ara[i - 2];
    }
    cout << ara[n] << endl;
    return 0;
}

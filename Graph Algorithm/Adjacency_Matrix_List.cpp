#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> v[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    //value for 0 index
    for (int val : v[0])
    {
        cout << val << " ";
    }
    return 0;
}

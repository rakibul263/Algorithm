#include <bits/stdc++.h>
using namespace std;
int a, b, c;
void convert(int n, vector<pair<int, int>> adj[])
{
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = -1;
            if (i == j)
                mat[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (auto child : adj[i])
        {
            int childNode = child.first;
            int childCost = child.second;
            mat[i][childNode] = childCost;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> adj[n];
    while (e--)
    {
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }
    convert(n, adj);
    return 0;
}

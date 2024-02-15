#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool vis[N];
bool parentArray[N];
bool ans;
void dfs(int parent)
{
    vis[parent] = true;
    // cout << parent << endl;
    for (int child : adj[parent])
    {
        if (vis[child]==true && parentArray[parent] == child)
        {
            ans = true;
        }
        if (!vis[child])
        {
            dfs(child);
            parentArray[child] = parent;
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));
    ans = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << parentArray[i] << endl;
    // }
    if (ans)
        cout << "Cycle Found" << endl;
    else
        cout << "Cycle Not Found" << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int parent[N];
void dsu_initilize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
    }
    parent[1] = 2;
    parent[2] = 3;
    parent[5] = 6;
    parent[6] = 7;
}
int dsu_find(int node)
{
    if (parent[node] == -1)
    {
        return node;
    }
    int leader = dsu_find(parent[node]);
    return leader;
}
void dsu_union(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    parent[leaderA] = leaderB;
}
int main()
{
    dsu_initilize(8);
    dsu_union(1, 5);
    cout << dsu_find(1);

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int group_size[N];
void dsu_implementation(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}
int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}
void dsu_union_by_size(int node1, int node2)
{
    int leader_a = dsu_find(node1);
    int leader_b = dsu_find(node2);

    if (group_size[leader_b] > group_size[leader_a])
    {
        parent[leader_b] = leader_a;
        group_size[leader_a] += group_size[leader_b];
    }
    else
    {
        parent[leader_a] = leader_b;
        group_size[leader_b] += group_size[leader_a];
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_implementation(n);
    bool cycle = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leader_a = dsu_find(a);
        int leader_b = dsu_find(b);
        if (leader_a == leader_b)
        {
            cycle = true;
        }
        else
        {
            dsu_union_by_size(a, b);
        }
    }
    if (cycle == true)
    {
        cout << "Cycle Found";
    }
    else
    {
        cout << "Cycle not Found";
    }
    return 0;
}

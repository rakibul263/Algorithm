#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int group_size[N];
void dsu_initilize(int n)
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
    return leader;
}
void dsu_union(int node1, int node2)
{
    int leader_a = dsu_find(node1);
    int leader_b = dsu_find(node2);

    parent[leader_a] = leader_b;
}
void union_by_size(int node1, int node2)
{
    int leader_a = dsu_find(node1);
    int leader_b = dsu_find(node2);

    if (group_size[leader_a] > group_size[leader_b])
    {
        parent[leader_a] = leader_b;
        group_size[leader_a] += group_size[leader_b];
    }
    else
    {
        parent[leader_b] = leader_a;
        group_size[leader_b] += group_size[leader_a];
    }
}
int main()
{
    dsu_initilize(7);
    union_by_size(1, 2);
    union_by_size(2, 3);
    union_by_size(4, 5);
    union_by_size(5, 6);
    union_by_size(1, 4);
    cout << dsu_find(1)<<endl;
    cout << dsu_find(4);
    return 0;
}

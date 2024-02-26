#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = -1; // By -1, I mean all the values of the matrix are minus one
            if (i == j)
                mat[i][j] = 0; // All values of the principal diagonal are "0"
        }
    }
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        mat[a][b] = c;
        mat[b][a] = c;
        //If there is a connection then the cost values will sit
    }
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

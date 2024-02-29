#include <bits/stdc++.h>
using namespace std;
void bobble_sort(int a[], int n);
void print_sorting_array(int a[], int n);

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bobble_sort(a, n);
    print_sorting_array(a, n);
    return 0;
}

void bobble_sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = true;
            }
        }
        if (flag == false)
            break;
    }
}
void print_sorting_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
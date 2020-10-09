#include <bits/stdc++.h>
using namespace std;

// Naive Solution
// O((m + n) * log(m + n))
void merge(int a[], int b[], int m, int n)
{
    int c[m + n];
    for (int i = 0; i < m; i++)
        c[i] = a[i];
    for (int j = 0; j < n; j++)
        c[j + m] = a[j];
    sort(c, c + m + n);
    for (int i = 0; i < m + n; i++)
        cout << c[i] << " ";
}

// Efficient Solution
// O(m + n)
void merge_one(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
            cout << a[i++] << " ";
        else
            cout << b[j++];
    }
    while (i < m)
        cout << a[i++] << " ";
    while (j < n)
        cout << b[j++] << " ";
}

int main()
{

    return 0;
}

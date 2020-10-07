#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r);

// Merge sort Algorithm
void mergeSort(int arr[], int l, int r)
{
    if (r > l) // atleast 2 elements
    {
        int m = l + (r - l) / 2; // same as (l + r) / 2

        // sort 1st & 2nd halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // merge the two sorted halves
        merge(arr, l, m, r);
    }
}

// elements from l to m are sorted
// elements form m to h are sorted
// we need to merge the both parts of array
// l <= m < h
// time : O(n1 + n2) = O(n)
// spce : O(n)
void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1, n2 = r - m;
    int left[n1], right[n2];

    // copying data
    for (int i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[m + 1 + j];

    // merging
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    // filling remaining elements
    while (i < n1)
        arr[k++] = left[i++];
    while (j < n2)
        arr[k++] = right[j++];
}

int main()
{

    return 0;
}

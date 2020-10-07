## Basic questions

#### Q1. Given two sorted arrays. You have to merge them such that resultant array is also sorted.
```cpp
    I/p: a[] = { 10, 15, 20, 40 }
         b[] = { 5, 6, 6, 10, 15 }
    O/p: { 5, 6, 6, 10, 10, 15, 15, 20, 40 }
    
    I/p: a[] = { 1, 1, 2 }
         b[] = { 3 }
    O/p: { 1, 1, 2, 3 }
```

- ###### Naive Solution
  ```cpp
  // O((m + n) * log(m + n))
  void merge(int a[], int b[], int m, int n)
  {
    int c[m + n];
    for (int i = 0; i < m; i ++) c[i] = a[i];
    for (int j = 0; j < n; j ++) c[j + m] = a[j];
    sort(c, c + m + n);
    for (int i = 0; i < m + n; i ++)
      cout << c[i] << " ";
  }
  ```
  
- ###### Better Solution
  ```cpp
  // O(m + n)
  void merge(int a[], int b[], int m, int n)
  {
    int i = 0, j = 0;
    while (i < m && j < n)
    {
      if (a[i] < b[j]) cout << a[i ++] << " ";
      else cout << b[j ++];
    }
    while (i < m) cout << a[i ++] << " ";
    while (j < n) cout << b[j ++] << " ";
  }
  ```
  
  ##### Merge Sort Algorithm
  - Divide and conquer Algorithm (Divide, conquer and merge)
  - stable algorithm.
  - O(nlogn) Time and O(n) Aux space.
  - well suited for linked lists. works in O(1) aux space.
  - used in external sorting.
  - In general for arrays, quicksort outperforms.

- ###### Efficient Solution
  ```cpp
  // Merge sort Algorithm
  void mergeSort(int arr[], int l, int r)
  {
    if (r > l) // atleast 2 elements
    {
      int m = l + (r - l) / 2;  // same as (l + r) / 2
      
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
  // space : O(n)
  void merge(int a[], int l, int m, int h)
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
  ```


## medium or hard level questions

### Question 1

#### Problem Statement

What is the asymptotic complexity of the selectionSort function in terms of n?

```
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

```

### Solution

**Asymptotic Complexity** (Big O): O(n^2)

The `selectionSort` function implements the selection sort algorithm, which sorts an array by repeatedly finding the minimum element from the unsorted part of the array and swapping it with the first unsorted element.

Let's analyze the time complexity of the `selectionSort` function:

- The outer loop runs \(n-1\) times (from 0 to \(n-2\)), as it iterates through the array.
- The inner loop runs \(n - i - 1\) times for each iteration of the outer loop, where \(i\) is the current iteration of the outer loop.

The number of operations can be approximated as the sum of the series:

\[
(n-1) + (n-2) + (n-3) + \ldots + 1 = \frac{n \times (n-1)}{2}
\]

In Big O notation, we simplify this to \(O(n^2)\), indicating that the time complexity of the `selectionSort` function is quadratic with respect to \(n\).

### Question 2

#### Problem Statement

What is the asymptotic complexity of the fibonacci function in terms of n?

```
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

```

### Solution

**Asymptotic Complexity** (Big O): O(2^n)

The `fibonacci` function uses recursion to calculate Fibonacci numbers. It computes the Fibonacci number for \(n\) by recursively computing the Fibonacci numbers for \(n-1\) and \(n-2\) until it reaches the base cases where \(n\) is either 0 or 1.

To analyze the time complexity of the `fibonacci` function, consider the number of recursive calls and operations performed:

- In each recursive call, two more recursive calls are made (one for \(n-1\) and one for \(n-2\)).
- The number of recursive calls forms a binary tree with a depth of \(n\).

The number of nodes in this binary tree (i.e., the number of recursive calls) grows exponentially with \(n\). Specifically, it follows the Fibonacci sequence itself. This leads to an exponential time complexity.

Therefore, the asymptotic complexity of the `fibonacci` function in terms of \(n\) is \(O(2^n)\), indicating exponential time complexity.

### Question 3

#### Problem Statement

What is the asymptotic complexity of the quickSort function in terms of n?

```
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

```

### Solution

**Asymptotic Complexity** (Big O): O(n log n)

Sure, let's discuss the asymptotic complexity of the `quickSort` function in terms of \(n\), with reference to the provided code.

The `quickSort` function implements the quicksort algorithm, a widely used comparison-based sorting algorithm. The algorithm follows a divide-and-conquer approach, where it selects a "pivot" element from the array and partitions the elements such that elements smaller than the pivot are on the left and elements greater than the pivot are on the right.

The time complexity of quicksort primarily depends on how well the pivot is chosen and how well the array is divided during each recursion. The key operation is the partitioning step, which runs in \(O(n)\) time, where \(n\) is the size of the subarray being partitioned.

In the best and average cases, the array is divided roughly in half at each recursion level, leading to (O(log n)) levels of recursion, and \(O(n)\) work at each level due to partitioning. Therefore, the average and best-case time complexity is (O(n log n))

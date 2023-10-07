## basic questions

### Question 1

#### Problem Statement

Find the asymptotic complexity of sum in terms of n.

```
int sum(int n) {
    int result = 0;
    for (int i = 1; i <= n; i++) {
        result += i;
    }
    return result;
}
```

### Solution

**Asymptotic Complexity** (Big O): O(n)

The asymptotic complexity of the `sum` function in terms of \( n \) can be expressed using Big O notation. In this case, the function involves a loop that iterates from 1 to \( n \), performing a constant-time operation (addition) in each iteration.

The number of iterations in the loop is directly proportional to \( n \), as the loop runs from 1 to \( n \) inclusive. Therefore, the time complexity of the `sum` function is \( O(n) \), indicating a linear time complexity with respect to \( n \).

### Question 2

#### Problem Statement

What is the asymptotic complexity of the printNumbers function in terms of n?

```
void printNumbers(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i << " " << j << endl;
        }
    }
}
```

### Solution

**Asymptotic Complexity** (Big O): O(n^2)

The `printNumbers` function contains a nested loop where both loops iterate from 0 to \( n - 1 \) inclusive. In Big O notation, we express this as \( O(n^2) \) because the number of iterations is proportional to \( n \times n \), resulting in a quadratic relationship between the input size (\( n \)) and the number of operations. Thus, the asymptotic complexity of the `printNumbers` function in terms of \( n \) is \( O(n^2) \).

### Question 3

#### Problem Statement

What is the asymptotic complexity of the factorial function in terms of n?

```
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}
```

### Solution

**Asymptotic Complexity** (Big O): O(n)

The `factorial` function calculates the factorial of \( n \) recursively by multiplying \( n \) with the factorial of \( n-1 \), until \( n \) reaches 1. The algorithm's time complexity can be analyzed by examining the number of recursive calls made.

In each recursive call, the function performs a constant-time operation (the multiplication) and makes a recursive call with \( n-1 \). The number of recursive calls is directly proportional to \( n \) because it decreases by 1 in each recursion until it reaches 1.

Therefore, the time complexity of the `factorial` function in terms of \( n \) is \( O(n) \) since the number of recursive calls and operations is linearly proportional to \( n \).

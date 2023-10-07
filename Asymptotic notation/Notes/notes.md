## Notes

# Asymptotic Notation Overview

Asymptotic Notation is crucial for describing the running time of an algorithm, providing insights into algorithm efficiency. There are three main notations:

- **Big O**: Represents the worst-case running time.
- **Big Theta (Θ)**: Represents the average-case running time.
- **Big Omega (Ω)**: Represents the best-case running time.

## Asymptotic Complexity Hierarchy

The hierarchy of asymptotic complexities, listed from the most efficient to the least, is as follows:

`O(1) < O(log n) < O(n) < O(n log n) < O(n^2) < O(n^k) < O(2^n) < O(n!)`

## Importance of Asymptotic Notation

1. **Efficiency Characterization**: Provides a simple characterization of an algorithm's efficiency.
2. **Algorithm Comparison**: Allows for easy comparison of the performance of various algorithms.

## Steps to Determine Asymptotic Notations

### Omega (Ω) Notation

1. Break the program into smaller segments.
2. Calculate the number of operations for each segment in terms of the input size, assuming the input that minimizes the program's execution time.
3. Simplify the total number of operations to obtain a function in terms of n, denoted as f(n).
4. Remove constants and choose the term with the least order or any other function that is always less than f(n) as g(n). Omega notation of f(n) is then represented as Ω(g(n)).

### Theta (Θ) Notation

1. Break the program into smaller segments.
2. Calculate the number of operations for each segment based on various inputs, ensuring a representative distribution of cases.
3. Obtain a function of n, denoted as g(n), by summing the calculated values and dividing by the total number of inputs.
4. In Θ notation, represent the function as Θ(g(n)).

### Big O (O) Notation

1. Break the program into smaller segments.
2. Calculate the number of operations for each segment in terms of the input size, assuming the input that maximizes the program's execution time (worst-case scenario).
3. Simplify the total number of operations to obtain a function in terms of n, denoted as f(n).
4. Remove constants and choose the term with the highest order, as it becomes significant for n approaching infinity. Represent the function as g(n). Big O notation of f(n) is then represented as O(g(n)).

## Example: Determining Time Complexity

### Problem Statement

Given a positive integer n and a function f(n), determine the time complexity of f(n), expressed as a polynomial.

### Solution

The function can be represented as f(n) = a0 + a1n + a2n^2 + ... + amn^m, where am is greater than zero. Simplifying, we get f(n) = 1 + n + n^2 + ... + n^m. Therefore, the time complexity is Θ(n^m).

---

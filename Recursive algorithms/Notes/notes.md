## Notes


# Definition
    Recursion refers to making a function call within the same function until a specific condition is satisfied.
    This algorithm is very useful for programs that require you to do the same thing for different parameters. It can make code shorter and more readable.
    
    It usually results in a bit higher complexity so it should be used only when no other options seem viable. It can also result in crashes if not used properly i.e no proper condition is applied for stopping the function call.


# Some examples where recursion can be used are:
  1. Factorial
  2. Fibonacci Sequence
    


# 1. Factorial:

    
    int factorial(int a){
    return (a == 1 || a == 0) ? 1 : a * factorial(a - 1);
    }

    


# 2. Fibonacci Sequence:

    
    int fibonacci(int a){
    return (n == 0 || n == 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
    }
    
    






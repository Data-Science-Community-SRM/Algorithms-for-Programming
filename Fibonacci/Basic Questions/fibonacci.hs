-- Function to calculate the n-th number in the Fibonacci sequence
fibonacci :: Integer -> Integer
fibonacci 0 = 0
fibonacci 1 = 1
fibonacci n = fibonacci (n - 1) + fibonacci (n - 2)

-- Example of usage:
main = do
    let n = 10
    putStrLn ("The " ++ show n ++ "th number in the Fibonacci sequence is " ++ show (fibonacci n))

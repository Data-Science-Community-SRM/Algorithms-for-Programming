## Problem : Given two sorted arrays arr1[] of size N and arr2[] of size M.  
##           Each array is sorted in non-decreasing order.
##           Merge the two arrays into one sorted array in non-decreasing order without using any extra space.

## Input:     T(number of testcases),N,M and elements of sorted arrays arr1,arr2

##  Program:


t = int(input())
for i in range(t):
    n1,n2 = map(int,input().split())
    arr1 = list(map(int,input().split()))
    arr2 = list(map(int,input().split()))
    arr1 = arr1 + arr2
    arr1.sort()
    for i in arr1:
        print(i,end=" ")
    print()
    t = t -1

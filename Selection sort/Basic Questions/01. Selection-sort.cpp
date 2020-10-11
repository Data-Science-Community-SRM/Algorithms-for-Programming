/*
C++ program to demonstrate the implementation of Selection sort
Contributed to  Data-Science-Community-SRM on Github
Contributor: Santhosh-Vardhan
*/
#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n) //two arguments - the array(pointer) and the number of elements 
{       
    for (int i = 0; i < n-1; i++)  
    {  
        int minLoc = i;  
        for (int j = i+1; j < n; j++)//traverse through the array and find the location of the minimum index  
            if (arr[j] < arr[minLoc])  
                minLoc = j;  
        swap(arr[minLoc],arr[i]);//Swap the values of the minimum element right now and the current location
    }  
}  
int main()
{
}

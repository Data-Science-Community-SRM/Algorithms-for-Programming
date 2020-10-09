/*
C++ program to demonstrate the implementation of Insertion Sort
Contributed to  Data-Science-Community-SRM on Github
Contributor: Santhosh-Vardhan
*/
#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n) //two arguments - the array(pointer) and the number of elements 
{    
    for (int i = 1; i < n; i++) 
    {  
        int cEle = arr[i]; //Storing the current value in cEle 
        int j = i - 1;  
        while (j >= 0 && arr[j] > cEle) //Comparing with the sorted side of the array
        {  
            arr[j + 1] = arr[j];//Changing the value  
            j--;  
        }  
        arr[j + 1] = cEle;  //Setting the value of cEle at the place where the loop stopped
    }  
}  
int main()
{
}
  

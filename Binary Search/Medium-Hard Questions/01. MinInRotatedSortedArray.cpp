
/*
Given a sorted array arr[] (may be distinct or may contain duplicates) of size N that is rotated at some unknown point, the task is to find the minimum element in it. 
Examples: 

    Input: arr[] = {5, 6, 1, 2, 3, 4}
    Output: 1
    Explanation: 1 is the minimum element present in the array.

    Input: arr[] = {1, 2, 3, 4}
    Output: 1

    Input: arr[] = {2, 1}
    Output: 1
*/

#include <bits/stdc++.h>
using namespace std;
 
int findMin(vector<int>& arr, int low, int high){
    // if array is not rotated
    if (arr[low] <= arr[high]){
        return arr[low];
    }
    // binary search starts herev
    while(low <= high){
        int mid = (low + high) / 2;
        // Check if mid is the minimum element
        if(mid-1 >= 0 && arr[mid] < arr[mid - 1]){
            return arr[mid];
        }
        // If the left half is sorted, the minimum element must be in the right half
        if(arr[mid] > arr[high]){
            low = mid + 1;
        }
        // If the right half is sorted, the minimum element must be in the left half
        else{
            high = mid - 1;
        }
    }
    return -1;
}
 
int main(){
    vector<int> arr = { 5, 6, 1, 2, 3, 4 };
    int N = arr.size();
    cout << "The minimum element is "<< findMin(arr, 0, N - 1) << endl;
    return 0;
}
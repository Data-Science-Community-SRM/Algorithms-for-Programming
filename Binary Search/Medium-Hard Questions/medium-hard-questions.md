## medium or hard level questions

Problem Link : https://www.interviewbit.com/problems/rotated-sorted-array-search/

Solution

#include <bits/stdc++.h> 
using namespace std;
 	
int search(const vector<int> &A, int B) {
int l=0,h = A.size()-1,mid;

while(l <h)
{
    mid = l +(h-l+1)/2;
    if(A[mid] > A[l])l = mid;
    else h = mid-1;
}
int maxp = l;
  l = 0 , h = maxp;
  while(l < h)
  {
      mid = l + (h-l+1)/2;
      if(A[mid] > B)h = mid-1;
      else l = mid;
  }
 if(A[l] == B)return l;
 else
 {
     
     l = maxp+1 , h = A.size()-1;
  while(l < h)
  {
      mid = l + (h-l+1)/2;
      if(A[mid] > B)h = mid-1;
      else l = mid;
  }
    if(A[l] == B)return l;
 else return -1; 
     
     
 }
    
    
    
}
 int main() {
 	 ios_base::sync_with_stdio(false); 
 	     cin.tie(NULL);
 	     
 	     cout << "Enter the size of the input array :" <<endl; 
 	     int n,B;
 	     cin >> n;
 	     cout << "Enter a sorted array that is rotated about an index"<<endl;
 	     // eg. 4 5 6 7 0 1 2 3
 	     vector<int> A(n);
 	     for(int i = 0 ;i < n;i++){cin >>A[i];}

 	     cout << "Enter element to be searched in the rotated sorted array :" << endl;
 	 	 cin >> B;
 	 	 int index = search(A,B);
 	 	if(index == -1)cout << "Element not found in the array"<<endl;
 	 	else cout<< "Element found at index : "<<index <<endl;
 	  return 0;
 	 }

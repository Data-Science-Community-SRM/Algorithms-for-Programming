## Notes


Insertion sort is based on the idea that one element from the input elements is consumed in each iteration to find its correct position i.e, the position to which it belongs in a sorted array.

It iterates the input elements by growing the sorted array at each iteration. It compares the current element with the largest value in the sorted array. If the current element is greater, then it leaves the element in its place and moves on to the next element else it finds its correct position in the sorted array and moves it to that position. This is done by shifting all the elements, which are larger than the current element, in the sorted array to one position ahead

Implementation
```
void insertion_sort ( int A[ ] , int n) 
{
     for( int i = 0 ;i < n ; i++ ) {
    /*storing current element whose left side is checked for its 
             correct position .*/

      int temp = A[ i ];    
      int j = i;

       /* check whether the adjacent element in left side is greater or
            less than the current element. */

          while(  j > 0  && temp < A[ j -1]) {

           // moving the left side element to one position forward.
                A[ j ] = A[ j-1];   
                j= j - 1;

           }
         // moving current element to its  correct position.
           A[ j ] = temp;       
     }  
}
```

Pseudocode for insertion sort

Now that you know how to insert a value into a sorted subarray, you can implement insertion sort:
Call insert to insert the element that starts at index 1 into the sorted subarray in index 0.
Call insert to insert the element that starts at index 2 into the sorted subarray in indices 0 through 1.
Call insert to insert the element that starts at index 3 into the sorted subarray in indices 0 through 2.
…
Finally, call insert to insert the element that starts at index n-1n−1n, minus, 1 into the sorted subarray in indices 0 through n-2n−2n, minus, 2.
As a reminder, here's the visualization that steps through the algorithm on a deck of cards:

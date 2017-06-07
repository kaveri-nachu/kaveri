We can Use Sorting to solve the problem in O(nLogn) time. Following are detailed steps.
1) Copy the given array to an auxiliary array temp[].
2) Sort the temp array using a O(nLogn) time sorting algorithm.
3) Scan the input array from left to right.
For every element, count its occurrences in temp[] using binary search. 
As soon as we find an element that occurs more than once, we return the element. 
This step can be done in O(nLogn) time.
We can Use Hashing to solve this in O(n) time on average.
The idea is to traverse the given array from right to left and update the minimum index whenever we find an element that has been visited on right side. 

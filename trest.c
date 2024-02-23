#include <stdio.h>
 
// The function assumes that the array is sorted
int findCount(int arr[], int num, int diff)
{
    // Initialize positions of two elements
    int i = 0; 
    int j = 1;
 
    // Search for a pair
    while (i<num && j<num)
    {
        if (i != j && (arr[j] - arr[i] == diff || arr[i] - arr[j] == diff))
        {
            printf(sizeof(arr[i])+ sizeof(arr[j]));   
        }
        else if (arr[j]-arr[i] < diff)
            j++;
        else
            i++;
             }
    return -1;
}
 
// Driver program to test above function


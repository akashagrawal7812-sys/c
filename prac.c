#include <stdio.h>
int main() 
{
    int arr[5] = {12, 11, 13, 5, 6};
    int i, key, j, n = 5;

    for (i = 1; i < n; i++) 
        {
        key = arr[i];    // key = 11
        j = i - 1;   //j = 0
        while (j >= 0 && arr[j] > key)  // 12 > 11(   /* ascending */
            arr[j + 1] = arr[j]; // [1] = 12; shifting twds rt  12 12 13 5 6
            j--;    //j = -1
        }
        arr[j + 1] = key;    // 11 12 13 5 6
    
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
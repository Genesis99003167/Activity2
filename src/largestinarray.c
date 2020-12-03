#include <stdio.h>
#include <math.h>
#include "largestinarray.h"

int largestinarray(int arr[], int n) 
{ 
    int i; 
    int max = arr[0]; 
    for (i = 1; i < n; i++) 
        if (arr[i] > max) 
            max = arr[i]; 
  
    return max; 
} 
#include <stdio.h>
#include <math.h>
#include "smallestinarray.h"

int smallestinarray(int arr[], int n)
{
    int i; 
    int min = arr[0]; 
    for (i = 1; i < n; i++) 
        if (arr[i] < min) 
            min = arr[i]; 
  
    return min; 
}
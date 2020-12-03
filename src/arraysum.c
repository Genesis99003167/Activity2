#include <stdio.h>
#include <math.h>
#include "arraysum.h"

int arraysum(int arr[], int n) 
{ 
    int sum = 0;
    for (int i = 0; i < n; i++) 
    sum += arr[i]; 
  
    return sum; 
} 
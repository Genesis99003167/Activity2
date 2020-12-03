#include <stdio.h>
#include <math.h>
#include "checkmagic.h"

int findReverse(int n) {
    int reverseNumber = 0;
    
    while (n > 0) {
        reverseNumber = (reverseNumber * 10) + (n % 10);
        n = n / 10;
    }
    
    return reverseNumber;
}

int findSum(int n){
    int sum = 0;
    
    while (n > 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }
    
    return sum;
}

int checkmagic(int number)
{   
    int sum;
    int reversesum;
    sum = findSum(number);
    reversesum = findReverse(sum);

    if(sum*reversesum == number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
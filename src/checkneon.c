#include <stdio.h>
#include <math.h>

int checkneon(int num)
{
    if (num<0)
    {
        return -1;
    }
    else
    {
      
    int sq;
    sq = num*num;

    int sum_digits = 0;
    while (sq!=0)
    {
        sum_digits = sum_digits + sq%10;
        sq = sq/10;
    }
    if (sum_digits == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }

    }
    
}
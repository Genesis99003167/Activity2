#include <stdio.h>
#include <math.h>
#include "checkprime.h"

int checkprime(int n) 
{
   if(n <= 0 )
   {
      return -1;
   }
   if(n == 1)
   {
      return 3;
   }
   if(n > 1)
   {
      int i, flag = 1, squareRoot;

      squareRoot = sqrt(n);
      for (i = 2; i <= squareRoot; ++i) {
         if (n % i == 0) {
            flag = 0;
            break;
         }
      return flag;
   }
   }
   
}
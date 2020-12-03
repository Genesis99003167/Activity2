#include <stdio.h>
#include <math.h>
#include "checkarmstrong.h"

int checkarmstrong(int num)
{
   if(num<0)
   {
      return -1;
   }
   else
   {
      int originalNum, remainder, n = 0, flag;
      double result = 0.0;

      for (originalNum = num; originalNum != 0; ++n) {
         originalNum /= 10;
      }

      for (originalNum = num; originalNum != 0; originalNum /= 10) {
         remainder = originalNum % 10;

         result += pow(remainder, n);
      }

      if (round(result) == num)
         flag = 1;
      else
         flag = 0;
      return flag;
   }
}
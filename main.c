#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arraysum.h"
#include "bintodeci.h"
#include "checkarmstrong.h"
#include "checkmagic.h"
#include "checkneon.h"
#include "checkperfect.h"
#include "checkprime.h"
#include "decitobin.h"
#include "largestinarray.h"
#include "missingnoinarray.h"
#include "smallestinarray.h"
#include "test_main.h"

int arraysum(int arr[], int n);
int bintodeci(long long n);
int checkarmstrong(int num);
int checkmagic(int number);
int checkneon(int num);
int checkperfect(int num);
int checkprime(int n);
long long decitobin(int n);
int largestinarray(int arr[], int n);
int getmissingno(int a[], int n);
int smallestinarray(int arr[], int n);


int main()
{
    /*
    int arr[] = {1,2,4};
    arraysum(arr, 3);
    bintodeci(11111111);
    checkarmstrong(153);
    checkmagic(34);
    checkneon(9);
    checkperfect(23);
    checkprime(17);
    decitobin(145);
    largestinarray(arr, 3);
    missingnoinarray(arr, 3);
    smallestinarray(arr, 3);
    */
   testMain();

    return 1;
}

/******************************************
*
* C functions to call from R using .C()
*
******************************************/

#include <stdio.h>
#include "mylib.h"

void Rintsum( int* x, double* y, char** z, int* sum){

   int xx = *x;
   double yy = *y;

   int tot = intsum( xx, yy, *z); 

   *sum = tot; 
}

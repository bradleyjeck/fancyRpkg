
#include <stdio.h>
#include <string.h> 

// casts all of its arguments to type int
// and adds them up
int intsum( int x, double y, char* z)
{
   int yint = (int) y;
   int zlen = strlen(z);
   int ztot = 0;
   int i;
   for( i=0; i < zlen; i=i+1){
       ztot = ztot + z[i];
   }
   int total = x + yint + ztot; 
   return total;

} 

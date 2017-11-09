/****************************************
*
* Register C functions to call from R 
*
*****************************************/

#include <stdio.h>
#include <string.h>
#include <R_ext/Rdynload.h>
#include "r_to_mylib.h"

static const R_CMethodDef cMethods[] = {
    {"Rintsum" , (DL_FUNC) &Rintsum, 4},
    NULL};

void R_init_fancyRpkg(DllInfo *dll)
{
    R_registerRoutines(dll, cMethods,
                       NULL, //callMethods
                       NULL,
                       NULL);
  
     R_useDynamicSymbols(dll, FALSE);
}

/* Generated by CIL v. 1.3.5 */
/* print_CIL_Input is false */

#define CCURED_SPLIT_ARGUMENTS
// #define CCURED_ALLOW_PARTIAL_ELEMENTS_IN_SEQUENCE
// #define CCURED_LOG_NON_POINTERS
#define CCURED_USE_STRINGS
// #define CCURED_FAIL_IS_TERSE
// #define CCURED_ALWAYS_STOP_ON_ERROR
// Include the definition of the checkers
#define CCURED
#define CCURED_POST
#include "ccuredcheck.h"
struct printf_arguments {
   int i ;
   double d ;
   char * __ROSTRING  s ;
   long long ll ;
};
extern void __ccuredInit(void) ;
extern  __attribute__((__noreturn__)) void abort_deepcopy(char *errmsg ) ;
int *g  ;
struct heapified {
   int local  __HEAPIFY  ;
};
void foo(void) ;
void foo(void) 
{ struct heapified *__heapified ;
  struct heapified *__cil_tmp3 ;
  struct heapified *__cil_tmp4 ;

  {
  __heapified = (struct heapified *)0;
  __cil_tmp4 = (struct heapified *)wrapperAlloc(((sizeof(*__heapified) + 3U) >> 2) << 2);
  if (__cil_tmp4) {

    __cil_tmp3 = __cil_tmp4;





  } else {
    __cil_tmp3 = 0;
  }
  __heapified = __cil_tmp3;
  CHECK_NULL((void *)__heapified);
  __heapified->local = 5;
  g = (int *)(& __heapified->local);
  wrapperFree((void *)__heapified);
  return;
}
}

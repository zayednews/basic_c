#include <stdio.h>
#define MAX 1000
int main()
{
   int MAX = 100;
   //error
  /* int main()
   {
      int 1000 = 100;  // COMPILER ERROR: expected unqualified-id before numeric constant
      printf("%d ", 1000);
      return 0;
   }*/
   printf("%d ", MAX);
   return 0;
}

#include <stdio.h>
 
int main()
{
   printf("Current File :%s\n", __FILE__ );
   printf("Current Date :%s\n", __DATE__ );
   printf("Current Time :%s\n", __TIME__ );
   printf("Line Number :%d\n", __LINE__ );
   return 0;
}
//output:
Current File :<stdin>
Current Date :Mar 15 2018
Current Time :08:07:07
Line Number :8

#include "stdio.h"

#define MYINC   (  a  )  (  ( a )  +  1 )

int main()
{

 printf("GeeksQuiz!");

 return 0;
}
/*Please note that #define is a preprocessor directive i.e. it’s processed before actual compilation takes place.
In the above program snippet MYINC isn’t used in the program anywhere. So even though MYINC doesn’t perform the 
intended behaviour i.e. it won’t increment a, but MYINC is a valid macro. If we had used MYINC anywhere in the program,
it would have been replaced with “( a ) ( ( a ) + 1 )”. So above program will compile and run without any issue.*/

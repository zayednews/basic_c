#include “stdio.h”
#include “stdio.h”
#include “stdio.h”

int main()
{
 printf(“Whether this statement would be printed?”)
 return 0;
}
/*It’s okay to include library header files multiple times in a program.
But actually the content of the header file is included only once. The way it’s achieved is due to usage of “#ifndef“,
“#define” and “#endif”. That’s why it’s recommended to use these preprocesor macros even in user defined header files.
For an example and usage of this, please check out the “Discuss it” of this question.*/

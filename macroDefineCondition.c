#include <stdio.h>
#define PRINT(i, limit) do \
                        { \
                            if (i++ < limit) \
                            //error of increment
                            { \
                                printf("GeeksQuiz\n"); \
                                continue; \
                            } \
                        }while(1)
 
int main()
{
    PRINT(0, 3);
    return 0;
}

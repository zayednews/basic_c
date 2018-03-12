#include <stdio.h>
int main()
{
    int i = 3;
    int j;
    j = sizeof(++i + ++i);
    printf("i=%d j=%d\n", i, j);
    //output: i=3, j=4
    return 0;
}

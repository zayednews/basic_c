#include<stdio.h>
int main()
{
    int a[10][20][30] = {0};
    int *b = a;
    //error: can not convert
    int *c = a+1;
    printf("%ld", c-b);
    return 0;
}

#include<stdio.h>

int fun();
int main()
{
    int *a = fun();
    //error: invalid convertion
    printf("%d",*a);
    return 0;
}
int fun()
{
    int a = 10;
    return a;
}

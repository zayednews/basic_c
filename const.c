#include<stdio.h>
int main()
{
    const int x=5;
    const int *ptrx;
    ptrx = &x;
    *ptrx = 10;
    printf("%d\n", x);
    //error
    //it is real only (*ptrx) not allocated
    return 0;
}

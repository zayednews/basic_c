#include <stdlib.h>
int *f1()
{
    int x = 10;
    return &x;
    //error
}
int *f2()
{
    int *ptr;
    *ptr = 10;
    return ptr;
    //error
}
int *f3()
{
    int *ptr;
    ptr = (int*) malloc(sizeof (*ptr));
    return ptr;
}

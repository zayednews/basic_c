#include<stdio.h>
int a = 10;
int fun()
{
    static int a = 1;
    printf("%d ",a);
    a++;
    return 0;
}
int main()
{
    fun();
    fun();
    return 0;
}

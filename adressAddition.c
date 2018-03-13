#include<stdio.h>
int main()
{
    int a[10][20][30]={0};
    printf("%ld",&a+1 - &a);
    return 0;
}

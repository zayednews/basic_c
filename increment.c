#include<stdio.h>
int main()
{
    int a = 5;
    int b = ++a * a++;
    printf("%d ",b);
    //output: 42
    return 0;
}

#include<stdio.h>
int main()
{
    char str[] = {'a','b','c','\0'};
    str[0] -= 32;
    printf("%s",str);
    //output: Abc
    return 0;
}

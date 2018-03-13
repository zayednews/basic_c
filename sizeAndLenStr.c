#include<stdio.h>
#include<string.h>
int main()
{
    char string[] = "Hello";
    printf("%lu %lu",sizeof(string),strlen(string));
    //out: 6    5
    return 0;
}

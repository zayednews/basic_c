#include<stdio.h>
int main()
{
    char *ptr;
    char string[] = "How are you?";
    ptr = string;
    ptr += 4;
    printf("%s",ptr);
    //output: are you?
    return 0;
}

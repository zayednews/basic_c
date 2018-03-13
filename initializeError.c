#include<stdio.h>
int main()
{
    int a = 1,2;
    //error
    int b = (1,2);
    if(a == b)
    printf("Equal");
    else
    printf("Not Equal");
    return 0;
}

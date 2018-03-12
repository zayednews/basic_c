#include<stdio.h>
int main()
{
    int i=10;
    static int x=i;
    if(x==i)
    printf("Equal");
    else if(x>i)
    printf("Greater");
    else
    printf("Lesser");
    return 0;
}

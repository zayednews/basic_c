#include<stdio.h>
int main()
{
    char c=125;
    c=c+10;
    //c=125+2=127
    //c=127+1=-128
    //c=-128+7=-121
    printf("%d",c);
    //output: -121
    return 0;
}

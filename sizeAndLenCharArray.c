#include<stdio.h>
#include<string.h>
//void foo(char *);
int main()
{
    char a[100] = {0};
    printf("%lu %lu",sizeof(a),strlen(a));
    //out: 100  0
    return 0;
}

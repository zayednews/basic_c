#include <stdio.h>
void e(int);
int main()
{
    int a = 3;
    e(a);
    putchar('\n');
    return 0; 
}
void e(int n)
{
    if (n > 0)
    {
        e(--n);
        //out: 0 1 2
        printf("%d \n", n);
        e(--n);
        //out: 0
    }
}

#include <stdio.h>
int foo(int x, int n)
{
    int val = 1;
    printf("A: %d\n", val);
    if (n > 0)
    {
        
        if (n % 2 == 1)
        val *= x;
         printf("x: %d\n", val);
         printf("n: %d\n", n);
        val *= foo(x * x, n / 2);
        
    }
    
    return val;
}
int main(void)
{
   // foo(2,3);
    printf("%d\n", foo(2,3));
    return 0;

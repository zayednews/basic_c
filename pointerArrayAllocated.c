#include <stdio.h>
int main(void)
{
    char a[5] = { 1, 2, 3, 4, 5 };
    char *ptr = (char*)(&a + 1); //full location
    printf("%d %d\n", *(a + 2), *(ptr-2)); 
    //out: 3 4
    return 0;
}

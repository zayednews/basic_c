#include <stdio.h>
#define get(s) #s

int main()
{
    char str[] = get(GeeksQuiz);
    printf("%s", str);
    return 0;
}

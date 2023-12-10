#include <stdio.h>
int main()
{
    int a = 0, b = 1, c = 2, d = 3, e = 4;
    a = b - c + d * e;
    printf("a = %d - %d + %d * %d = %d", b, c, d, e, a);
}
#include <stdio.h>
int main()
{
    int a = 0;
    double d = 10.21;

    printf("%lu\n", sizeof(a + d));
    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(float));
    printf("%lu\n", sizeof(double)); // es el doble del float
}
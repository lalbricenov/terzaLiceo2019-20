#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    printf("char: %lu\n", sizeof(char));
    printf("int: %lu\n", sizeof(int));
    printf("float: %lu\n", sizeof(float));
    printf("double: %lu\n", sizeof(double));
    printf("long: %lu\n", sizeof(long));
    return 0;
}
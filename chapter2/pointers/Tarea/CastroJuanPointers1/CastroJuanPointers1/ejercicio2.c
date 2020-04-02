#include <stdio.h>

void swap (int *n1, int *n2)
{
    int n3 = *n1;
    *n1 = *n2;
    *n2 = n3;
}

int main ()
{
    int n1 = 11;
    int n2 = 46;
    printf("%d %d\n", n1, n2);
    swap (&n1,&n2);
    printf("%d %d\n", n1, n2);
}

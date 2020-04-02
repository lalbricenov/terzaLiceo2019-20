#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long isbn = get_long("ISBN: ");

    int sum = 0;
    int x = isbn % 10;//This is the last digit

    for (int i = 9; i >= 1; i--)
    {
        isbn /= 10;// dropping last digit
        sum += (isbn % 10) * i;//getting last digit and multiplying by the corresponding factor
    }
    if ((sum % 11) == x)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
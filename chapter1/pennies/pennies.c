#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int nDays;
    do
    {
        nDays = get_int("Days in month: ");
    }
    while (nDays > 31 || nDays < 28);

    long long p;
    do
    {
        p = get_int("Pennies on first day: ");
    }
    while (p < 1);

    long long sum = p;

    for (int i = 2; i <= nDays; i++)
    {
        p *= 2;
        sum += p;
        // printf("%d %lld %lld\n", i, p, sum);
    }
    printf("$%.2f\n", sum / 100.0);

    // do{
    //     nDays = get_int("Days in month: ");
    // } while(nDays > 31 || nDays < 28);
}
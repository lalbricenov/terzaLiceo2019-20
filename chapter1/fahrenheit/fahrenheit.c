#include <stdio.h>
#include <cs50.h>

int main(void)
{
    double c = get_double("Celsius: ");
    printf("%.1f", c * 9 / 5 + 32);
}
#include <stdio.h>
#include<cs50.h>
void swap(int *x, int *y)
{   if(*x>=*y)
    {
     int c = *x;
    *x =*y ;
    *y= c;
    }
    else
    {
    *y = *x;
    }
    printf("%p %p\n",x,y);
}
int main(void)
{
    int x=get_int("numero");
    int y=get_int("numero2");
    printf("%d %d\n",x,y);
    swap(&x,&y);
    printf("%d %d\n",x,y);

}

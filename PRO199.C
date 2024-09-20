#include<stdio.h>
int main()
{
    int x;
    int *ptr1,**ptr2;
    x=10;
    ptr1=&x;
    ptr2=&ptr1;

    printf("\n value of x : %d",x);
    printf("\n add of x : %u",&x);
    printf("\n add of x using ptr1 %u ",ptr1);
    printf("\n add of x using ptr2 %u",*ptr2);
    printf("\n value of x using ptr2 : %d",**ptr2);

    printf("\n add of ptr1 : %u",&ptr1);
    printf("\n add of ptr1 using ptr2 : %u",ptr2);

    printf("\n add of ptr2 : %u",&ptr2);

    return 0;
}
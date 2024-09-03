#include<stdio.h>
int main()
{
    int a,b;
    printf("enter value a:");
    scanf("%d",&a);
    printf("enter value b:");
    scanf("%d",&b);

    if(a>b)
    {
        printf("\n a(%d) grater than b(%d)");
    }
    else
    {
        printf("\n b(%d) grater than a(%d)");
    }

    return 0;
}
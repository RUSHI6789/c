#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter value a:");
    scanf("%d",&a);
    printf("enter value b:");
    scanf("%d",&b);
    printf("enter value c:");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("\n a(%d) grater ",a);
    }
    else
    {
        if(b>c)
        {
            printf("\n b(%d) grater ",b);
        }
        else
        {
            printf("\n c(%d) grater ",c);
        }
    }
    return 0;
}
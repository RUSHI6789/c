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

    if(a>b)
    {
        if(a>c)
        {
             printf("\n a(%d) largest ",a);
        }
        else
        {
             printf("\n c(%d) largest ",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("\n b(%d) largest ",b);
        }
        else
        {
            printf("\n c(%d) largest ",c);
        }
    }
    return 0;
}
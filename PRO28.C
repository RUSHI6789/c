#include<stdio.h>
int main()
{
    int a;
    printf("enter a:");
    scanf("%d",&a);

    if(a%5==0)
    {
        printf("\n %d num divisible by 5 :",a);
    }
    else
    {
        printf("\n %d num not divisible by 5 :",a);
    }

    return 0;
}
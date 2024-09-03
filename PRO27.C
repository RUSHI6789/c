#include<stdio.h>
int main()
{
    int num;
    printf("enter num:");
    scanf("%d",&num);

    if(num>0)
    {
        printf("\n %d positive :",num);
    }
    else
    {
        printf("\n %d is nagetive :",num);
    }

    return 0;
}
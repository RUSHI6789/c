#include<stdio.h>
int main()
{
    int num;
    printf("enter a:");
    scanf("%d",&num);

    if(num%15==0)
    {
        printf("\n %d 5 nd 3 divisible by 5 nd 3 :",num);
    }
    else
    {
        printf("\n %d 5 nd 3 not divisible by 5 nd 3 :",num);
    }

    return 0;
}
#include<stdio.h>
int main()
{
    int num;
    printf("enter a:");
    scanf("%d",&num);

    if(num>0)
    {
        printf("\n positive ",num);
    }
    else
    {
        if(num<0)
        {
            printf("\n nagetive",num);
        }
        else
        {
            printf("\n zero ",num);
        }
    }
    return 0;
    
}
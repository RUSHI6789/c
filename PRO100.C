#include<stdio.h>
int main()
{
    int i,n,t=0;
    printf("enter num :");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("\n %d",i*i);
        }
        else
        {
            printf("\n %d",i);
        }
        i++;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter num :");
    scanf("%d",&n);
    i=n;
    do
    {
        printf("%d",i);
        i--;
    }while(i>=1);

    return 0;
}
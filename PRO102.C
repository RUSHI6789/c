#include<stdio.h>
int main()
{
    int i,n,a,j=1;
    printf("enter num :");
    scanf("%d"&n);
    i=1;
    while(i<=n)
    {
        a=i*j;
        printf("%d",a);
        j++;
    }
    i*=2;
    return 0;
}
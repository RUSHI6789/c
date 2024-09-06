#include<stdio.h>
int main()
{
    int i,j,r=65;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",r+j);
        }
        printf("\n");
    }
    return 0;
}
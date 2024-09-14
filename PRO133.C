#include<stdio.h>
int main()
{
    int i,j,s=5,r=5;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1 || i==s || j==1 || j==r)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        printf("\n");
    }
    return 0;
}
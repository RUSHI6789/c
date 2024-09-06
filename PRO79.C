#include<stdio.h>
int main()
{
    int i,j,r=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(r%2==0)
            {
                printf("%d",(0));
            }
            else
            {
                printf("%d",(1));
            }
            r++;
        }
        printf("\n");
    }
    return 0;
}
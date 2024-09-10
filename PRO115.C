#include<stdio.h>
int main()
{
    int i,j,r=11;
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=5)
        {
            printf("%d",r);
            r++;
            j++;
        }
        i++;
        r=r+5;
        printf("\n");
    }

    return 0;
}
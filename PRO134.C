#include<stdio.h>
int main()
{
    int i,j,s=5,r=5;
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=5)
        {
            if(i==1 || i==s || j==1 || j==r)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}

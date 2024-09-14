#include<stdio.h>
int main()
{
    int i,j,s=5,r=5;
    i=1;
    do
    {
        j=1;
        do
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
        }while(j<=5);
        i++;
        printf("\n");
    }while(i<=5);
    return 0;
}

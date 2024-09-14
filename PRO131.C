#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=8)
        {
            if(i==j || i+j)
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

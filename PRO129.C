#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    do
    {
        j=1;
        do
        {
            printf("*");
            j++;
        }while(j<=i);
        i+=2;
        printf("\n");
    }while(i<=10);

    return 0;
}

#include<stdio.h>
int main()
{
    int i=1,j,r=5;
    label1:
    if(i<=5)
    {
        j=1;
        label2:
        if(j<=i)
        {
            printf("* ");
            j++;
            goto label2;
        }
        printf("\n");
        i++;
        goto label1;
    }
    return 0;
}
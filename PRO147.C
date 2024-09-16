#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n \t \t a \t \t b \t \t total \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",a[i][j]);
        }
        for(j=0;j<3;j++)
        {
            printf("\t %d",b[i][j]);
        }
        for(j=0;j<3;j++)
        {
            printf("\t %d",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
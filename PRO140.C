#include<stdio.h>
int main()
{
    int p[5],q[5],i,r[5],g[5],gr[5],d[5],t[5];
    for(i=0;i<5;i++)
    {
        printf("enter price:");
        scanf("%d",&p[i]);
        printf("enter qyt:");
        scanf("%d",&q[i]);
    }
    printf("\n \t price \t qty \t rate \t gst\t");

    for(i=0;i<5;i++)
    {
    r[i]=p[i]*q[i];
    g[i]=r[i]*18/100;
    gr[i]=r[i]+g[i];
    d[i]=gr[i]*10/100;
    t[i]=gr[i]-d[i];

     printf("\n \t %d \t %d \t %d \t %d ");
    }    
    return 0;
}
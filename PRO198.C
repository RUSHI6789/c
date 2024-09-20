#include<stdio.h>
int main()
{
    int a[5]={11,12,13,14,15};
    int i=10;
    int *p=a;
    //p=&i;
    printf("\n %d",sizeof(i));
    printf("\n %d",sizeof(a));
    printf("\n %d",sizeof(p));
    for(i=0;i<5;i++)
    {
        //printf("\t %d",a[j]);
        printf("\n %d - %u - %d - %u",a[i],&a[i],*p+i,p+i);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("\n size of an arr : %d",sizeof(arr));

    for(i=0;i<5;i++)
    {
        printf("enter arr[%d] :",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\n arr[%d] : %d = address : %u",i+1,arr[i],&arr[i]);
    }
    return 0;
}
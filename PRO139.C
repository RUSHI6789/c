#include<stdio.h>
int main()
{
    int p=0;q=0;r=0;g=0;gr=0,d=0,t=0;
    printf("enter price:");
    scanf("%d",&p);
    printf("enter qyt:");
    scanf("%d",&q);
    r=p*q;
    g-r*18/100;
    gr=r+g;
    d=gr*10/100;
    t=gr-d;

    printf("\n \t price \t qty \t rate \t gst\t");
    printf("\n \t %d \t %d \t %d \t %d ");

    return 0;
}
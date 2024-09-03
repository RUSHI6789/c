#include<stdio.h>
int main()
{
    float maths,phy,chem,total,per;
    printf("enter maths :");
    scanf("%d",&maths);
    printf("enter phy :");
    scanf("%d",&phy);
    printf("enter chem :");
    scanf("%d",&chem);

    total=maths+phy+chem;
    printf("\n total :%f",total);

    per=total*100/300;
    printf("\n per :%2f",per);

    return 0;
}
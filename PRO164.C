#include<stdio.h>
int doSum(int p,int q)
{
    return p+q;
}
int main()
{
    int a,b,sum;
    int doSum(int,int);
    printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
    //sum=doSum(a,b);
    //printf("\n sum : %d",sum);
    printf("\n sum : %d",doSum(a,b));
    return 0;
}
#include<stdio.h>
int doSum()
{
    int a,b;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
    return a+b;
}
int main()
{
    int sum;
    int doSum();
    printf("\n sum : %d",doSum());
    return 0;
}
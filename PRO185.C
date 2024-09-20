#include<stdio.h>
int doSum(int l,int b)
{
	return l*b;
}
int main()
{
	int l,b;
	int doSum(int ,int);
	printf("Enter l:");
	scanf("%d",&l);
	printf("Enter b:");
	scanf("%d",&b);
	printf("\n squ : %d",doSum(l,b));
	return 0;
}
#include<stdio.h>
int doSum()
{
	int l,b;
	printf("Enter l:");
	scanf("%d",&l);
	printf("Enter b:");
	scanf("%d",&b);

	return l*b;
}
int main()
{
	int sum;
	int doSum();
	printf("\n rec : %d",doSum());
	return 0;
}
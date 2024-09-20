#include<stdio.h>
int doSum()
{
	int l;
	printf("Enter l:");
	scanf("%d",&l);

	return l*l;
}
int main()
{
	int sum;
	int doSum();
	printf("\n squ : %d",doSum());
	return 0;
}
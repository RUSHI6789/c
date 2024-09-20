#include<stdio.h>
int doSum()
{
	int p,r,n;
	printf("Enter p:");
	scanf("%d",&p);
	printf("Enter r:");
	scanf("%d",&r);
	printf("Enter n:");
	scanf("%d",&n);
	return p*r*n/100;
}
int main()
{
	int sum;
	int doSum();
	printf("\n si : %d",doSum());
	return 0;
}
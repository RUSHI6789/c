#include<stdio.h>
int doSum(int p,int r,int n)
{
	return p*r*n/100;
}
int main()
{
	int p,r,n;
	int doSum(int ,int ,int);
	printf("Enter p:");
	scanf("%d",&p);
	printf("Enter r:");
	scanf("%d",&r);
	printf("Enter n:");
	scanf("%d",&n);
	printf("\n si : %d",doSum(p,r,n));
	return 0;
}
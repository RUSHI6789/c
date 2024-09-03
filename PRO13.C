#include<stdio.h>
int main()
{
	int sim,p,r,n;
	printf("Enter value p:");
	scanf("%d",&p);
	printf("Enter value r:");
	scanf("%d",&r);
	printf("Enter value n:");
	scanf("%d",&n);
	sim=p*r*n/100;
	printf("\n simple intrest %d",sim);
	return 0;
}
#include<stdio.h>
int main()
{
	float i,r=0.5,n;
	printf("Enter num");
	scanf("%f",&n);
	i=0.5;
	do
	{
		printf("\n %.2f",r);
		i++;
		r+=i;
	}while(i<=n);
	return 0;
}
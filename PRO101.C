#include<stdio.h>
int main()
{
	int i,n,t=1;
	printf("Enter num");
	scanf("%d",&n);
	i=1;
	do
	{
		printf("\t %d",t);
		t+=t;
	}while(i<=n);
	return 0;
}
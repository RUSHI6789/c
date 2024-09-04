#include<stdio.h>
int main()
{
	int i,n;
	printf("\n Enter num:");
	scanf("%d",&n);
	for(i=-n;i<=n;i++)
	{
		printf("\t%d",i);
	}
	return 0;
}
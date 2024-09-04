#include<stdio.h>
int main()
{
	int i,n,t=1;
	printf("\n Enter num");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t+=t;
		printf("\n %d",t);
	}

	return 0;
}
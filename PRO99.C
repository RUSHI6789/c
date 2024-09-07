#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter num");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("\t %d",i*i);
		i++;
	}	
	return 0;
}
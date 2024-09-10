#include<stdio.h>
int main()
{
	int i,n,t=1,r,s=0;
	printf("Enter num");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		r=s+t;
		printf("\t %d",r);
		i++;
		s=t;
		t=r;
	}
	return 0;
}
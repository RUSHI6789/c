#include<stdio.h>
int main()
{
	int i,j,r,s=5;
	for(i=0;i<=4;++i)
	{
		for(j=0;j<=i;++j)
		{
			r=s-j;
			printf("%d",r+i);
		}
		printf("\n");
	}
	return 0;
}
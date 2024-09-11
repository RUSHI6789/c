#include<stdio.h>
int main()
{
	int i,j,r,s=5;
	i=5;
	do
	{
		j=5;
		do
		{
			r=5-j;
			printf("%d",r+i);
			--j;
		}while(j>=i);
	--i;
	printf("\n");
	}while(i>=1);
	return 0;
}
#include<stdio.h>
int main()
{
	int i,j,r=1;
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("%d",r);
			r++;
			j++;
		}
		i++;
		printf("\n");
	}	
	return 0;
}
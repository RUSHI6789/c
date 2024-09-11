#include<stdio.h>
int main()
{
	int i,j,r=1;
	i=1;
	do
	{
		j=1;
		do
		{
			if(r%2==0)
			{
				printf("%d",(0));
			}
			else
			{
				printf("%d",(1));
			}while(j<=i);
			j++;
			r++;
		}while(i<=5);
		i++;
		printf("\n");
	}
	return 0;
}
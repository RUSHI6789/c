#include<stdio.h>
int main()
{
	int i,j,r=65;
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			if(i%2==0)
			{
				printf("%c",r+32-49);
			}
			else
			{
				printf("%c",r);
			}
			j++;
			r++;
		}
	i++;
	printf("\n");
	}
return 0;
}
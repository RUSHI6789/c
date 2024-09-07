#include<stdio.h>
int main()
{
	int i,s=0;
	i=2;
	do
	{
		if(i%2==0)
		{
			s+=i;
		}
		i++;
	}while(i<=10);
	printf("\n even total %d",s);
	return 0;
}
#include<stdio.h>
int main()
{
	float income,tax;
	printf("\n enter income");
	scanf("%f",&income);
	if(income>2500)
	{
		tax=0;	
	}
	else
	{
		if(income>=2500 && income<5000)
		{
			tax=0.1*(income-2500);
		}
		else
		{
			if(income>=5000 && income<10000)
			{
				tax=0.1*(5000-25000)+0.2*(income-5000);
			}
			else
			{
				tax=0.1*(5000-2500)+0.2*(10000-5000)+0.3*(income-10000);			}
		}
	}
	printf("\n tax pay %f",tax);
	return 0;	
}
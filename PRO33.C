#include<stdio.h>
int main()
{
	int a=10,b=20,c=30;
	if(a>b && a>c)
	{
		printf("\n a(%d) is grater",a);
	}
	else if(b>c)
	{
		printf("\n b(%d) is grater",b);
	}
	else
	{
		printf("\n c(%d) is grater",c);
	}
	return 0;
}
#include<stdio.h>	
int recur(int n)
	{
		printf("\n winding %d",n);
		if(n>1)
			recur(n-1);
		//else
		//	return n;
		printf("\n unwinding %d",n);
	}
int main()
{
	int a=3;
	recur(a);
	return 0;
}
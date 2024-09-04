#include<stdio.h>
int main()
{
	char ch;
	for(ch='A';ch<='Z';ch+=2)
	{
		printf("\t %c",ch);
	}
	return 0;
}
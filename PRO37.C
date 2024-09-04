#include<stdio.h>
int main()
{
	char ch;
	printf("\n Enter ch :");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	{
		printf("\n character is vowel");
	}	
	else
	{
		printf("\n character is consonant");
	}
	return 0;
}
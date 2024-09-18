#include<stdio.h>
#include<string.h>
int main()
{
	//char str[]={"hello"};
	//printf("\n %s",str);

	char str1[10];
	printf("enter string:");
	//scanf("%s",str1);
	scanf("%[^\n]",str1);  // speace find //leanght no count
	//gets(str1);   // speace find //leanght no count
	//puts(str1);
	printf("\n str1 :%s",str1);
	return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	/*char str1[50];
	printf("Enter string :");
	gets(str1);
	printf("\n str1: %s",str1);*/

------> /* len and reverse*/

	int len;
	printf("Enter string :");
	gets(str1);
	//len=strlen(str1);
	printf("\n length of str1 : %d",len);
	//printf("\n length of str1 : %d",strlen(str1));
	printf("\n rev of str1 : %s",strrev(str1));

------>	/* copy*/

	/*char str1[50],str2[50];
	printf("Enter string 1:");
	gets(str1);
	printf("Enter string 2:");
	gets(str2);
	printf("\n str1 :%s",str2);
	printf("\n str2 :%s",str1);
	strcpy(str2,str1);*/

------>	/*canect*/

	/*char str1[50],str2[50];
	printf("Enter string 1:");
	gets(str1);
	printf("Enter string 2:");
	gets(str2);
	//strcat(str2,str1);
	strcat(str1,str2);
	printf("\n str1 :%s",str2);
	printf("\n str2 :%s",str1);*/
 
 ------> /*equal or not equal*/

	/*char str1[50],str2[50];
	printf("Enter string 1:");
	gets(str1);
	printf("Enter string 2:");
	gets(str2);
	printf("\n strcmp : %d",strcmp(str1,str2));
	if(strcmp(str1,str2)==0)
	{
		printf("\n both string are equal");
	}
	else
	{
		printf("\n both string are not equal");
	}*/
	return 0;
}
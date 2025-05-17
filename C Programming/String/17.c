#include<stdio.h>

void concate(char str1[],char str2[])
{
	int i,len=0;
	for(i=0;str1[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;str2[i]!='\0';i++)
	{
		str1[len++] = str2[i];
	}
	str1[len] = '\0';
	printf("\nValue of str1 = %s",str1);
	printf("\nValue of str2 = %s",str2);
}

int main()
{
	char str1[100],str2[100];
	printf("\nEneter the value in str1 = ");
	gets(str1);
	printf("\nEneter the value in str2 = ");
	gets(str2);
	
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	
	concate(str1,str2);
	return 0;
}

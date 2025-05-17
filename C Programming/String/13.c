#include<stdio.h>

int length(char str[])
{
	int i,len=0;
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	return len;
}

int main()
{
	char str[100];
	printf("\nEnter the string = ");
	gets(str);
	printf("\nOriginal value of string is = %s",str);
	
	int result = length(str);
	printf("\nLength of the string is = %d",result); 
	return 0;
}

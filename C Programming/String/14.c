#include<stdio.h>

void reverse(char str[])
{
	int i,len=0;
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	for(i=len-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}

int main()
{
	char str[100];
	printf("\nEnter the str = ");
	gets(str);
	printf("\nOriginal value of str = %s",str);
	
	printf("\nReversed string = ");
	reverse(str);
	return 0;
}

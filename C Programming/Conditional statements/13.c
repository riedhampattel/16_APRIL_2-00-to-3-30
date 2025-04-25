//write a c program to take a character from the user and print whether it is alphabet, number or a special character
#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter the character = ");
	scanf(" %c",&ch);
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		printf("\n%c is an alphabet",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("\n%c is a number",ch);
	}
	else
	{
		printf("\n%c is a special character",ch);
	}
	return 0;
}

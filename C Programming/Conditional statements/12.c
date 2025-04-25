//write a c program to take an Alphabet from the user and print whether it is in upper case or lower case
#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter the character = ");
	scanf(" %c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("\n%c is in upper case",ch);
	}
	else
	{
		printf("\n%c is in lower case",ch);
	}
	return 0;
}

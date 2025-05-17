#include<stdio.h>
int main()
{
	char str[100] = "Hello";
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",str[i]);
	}
	printf("\nLength of the string = %d",i);
	return 0;
}

#include<stdio.h>

void upper(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i] = str[i] - 32;
		}
	}
	printf("\nString in uppercase = %s",str);
}

int main()
{
	char str1[100];
	printf("\nEnter the string = ");
	gets(str1);
	
	printf("\nValue of str1 = %s",str1);
	
	upper(str1);
	return 0;
}

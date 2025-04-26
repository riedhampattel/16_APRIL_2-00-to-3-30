#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		printf("\nTops Technologies");//5
	}
	printf("\n");
	for(i=5;i>=1;i--)
	{
		printf("\nTops Technologies");
	}
	
	printf("\nWhile loop := ");
	i=1;
	while(i<=5)
	{
		printf("\nTOPS Technologies");
		i++;//6
	}
	
	printf("\nDo while loop := ");
	i=11;
	do
	{
		printf("\nTops Technologies");
		i++;
	}while(i<=5);
	return 0;
}

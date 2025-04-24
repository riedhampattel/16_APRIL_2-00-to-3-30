#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("\nEnter the value in num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value in num2 = ");
	scanf("%d",&num2);
	printf("\nEnter the value in num3 = ");
	scanf("%d",&num3);
	
	if(num1>num2 && num1>num3)
	{
		printf("\n%d is the biggest number",num1);
	}
	else if(num2>num1 && num2>num3)
	{
		printf("\n%d is the biggest number",num2);
	}
	else
	{
		printf("\n%d is the biggest number",num3);
	}
	return 0;
}

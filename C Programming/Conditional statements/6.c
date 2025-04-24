#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("\nEnter the value in num1 = ");
	scanf("%d",&num1);//30
	printf("\nEnter the value in num2 = ");
	scanf("%d",&num2);//20
	printf("\nEnter the value in num3 = ");
	scanf("%d",&num3);//10
	
	if(num1>num2)
	{
		if(num1>num3)
		{
			printf("\n%d is the biggest number",num1);		
		}
		else
		{
			printf("\n%d is the biggest number",num3);		
		}
	}
	else
	{
		if(num2>num3)
		{
			printf("\n%d is the biggest number",num2);			
		}	
		else
		{
			printf("\n%d is the biggest number",num3);						
		}
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int num1,num2,i;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);//50
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);//45
	
	for(i=num1;i<=num2;i++)
	{
		printf("%d ",i);
	}
	return 0;
}

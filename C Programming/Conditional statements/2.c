#include<stdio.h>
int main()
{
	int num1,num2;
	char ch = '%';
	char choice;
	up:
	printf("\nEnter the number = ");
	scanf("%d",&num1);	
	printf("\nEnter the number = ");
	scanf("%d",&num2);
	
	printf("\nPress '+' for addition");
	printf("\nPress '-' for subtraction");
	printf("\nPress '*' for multiplication");
	printf("\nPress '/' for division");
	printf("\nPress '%c' for remainder",ch);
	printf("\nEnter your choice = ");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '+':
			printf("\nThe addition of %d and %d is = %d",num1,num2,num1+num2);
		break;
		case '-':
			printf("\nThe subtraction of %d and %d is = %d",num1,num2,num1-num2);
		break;
		case '*':
			printf("\nThe multiplication of %d and %d is = %d",num1,num2,num1*num2);
		break;
		case '/':
			printf("\nThe division of %d and %d is = %.2f",num1,num2,(float)num1/num2);
		break;
		case '%':
			printf("\nThe remainder of %d and %d is = %d",num1,num2,num1%num2);
		break;			
	}
	
	printf("\nEnter 'y' to continue and 'n' to exit = ");
	scanf(" %c",&choice);
	if(choice=='y' || choice=='Y')
	{
		goto up;
	}
	return 0;
}

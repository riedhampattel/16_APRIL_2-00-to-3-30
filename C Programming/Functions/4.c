#include<stdio.h>
//4.without return type and without argument

void sub();//declaration

void sub()
{
	int num1,num2;
	printf("\nEnter the value in num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value in num2 = ");
	scanf("%d",&num2);
	
	int ans = num1-num2;
	printf("\nThe subtraction is = %d",ans);
}

int main()
{
	sub();
	return 0;
}

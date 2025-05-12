#include<stdio.h>
//1.with return type and with argument
int add(int n1,int n2);//declaration of the function

int add(int n1,int n2)
{
	int ans;
	ans = n1 + n2;
	return ans;
}

int main()
{
	int num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);	
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	
	int ans=add(num1,num2);
	
	printf("\nThe addition is = %d",ans);
	
	return 0;
}

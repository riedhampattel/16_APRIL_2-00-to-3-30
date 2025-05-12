#include<stdio.h>
//3.without return type and with argument
void multi(int n1,int n2);//declaration

void multi(int n1,int n2)
{
	int ans = n1*n2;
	printf("\nThe multiplication is = %d",ans);
}

int main()
{
	int num1,num2;
	printf("\nEnter the value in num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value in num2 = ");
	scanf("%d",&num2);
	
	multi(num1,num2);

	return 0;
}

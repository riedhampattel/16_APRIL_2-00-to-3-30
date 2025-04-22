#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("\nEnter the value in a = ");
	scanf("%d",&a);//20
	printf("\nEnter the value in b = ");
	scanf("%d",&b);//10
	
	c = a>b ? a:b;
	
	printf("\nValue of c = %d",c);
	return 0;
}

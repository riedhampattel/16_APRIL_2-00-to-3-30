#include<stdio.h>
int main()
{
	int num;
	up :
	printf("\nEnter the number = ");
	scanf("%d",&num);
	printf("\nValue of num = %d",num);
	if(num!=0)
	{
		goto up;
	}
	return 0;
}

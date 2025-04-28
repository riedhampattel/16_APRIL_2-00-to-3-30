#include<stdio.h>
int main()
{
	int num,digit=0;
	printf("\nEnter the number = ");
	scanf("%d",&num);//4
	
	while(num!=0)
	{
		num = num / 10;
		digit++;//1
	}
	
	printf("\nDigit = %d",digit);
	return 0;
}

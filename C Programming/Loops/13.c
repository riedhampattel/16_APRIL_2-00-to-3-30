#include<stdio.h>
#include<math.h>
int main()
{
	int num,digit=0,sum=0,rem,power;
	printf("\nEnter the number = ");
	scanf("%d",&num);//153
	int temp = num;
	int copy = num;
	
	while(num!=0)
	{
		num = num / 10;
		digit++;//3
	}
	
	while(temp!=0)
	{
		rem = temp % 10;
		power = pow(rem,digit);
		sum = sum + power;
		temp = temp / 10;
	}
	
	if(sum==copy)
	{
		printf("%d is an armstrong number",copy);
	}
	else
	{
		printf("%d is not an armstrong number",copy);
	}
	return 0;	
}

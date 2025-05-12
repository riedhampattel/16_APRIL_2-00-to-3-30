#include<stdio.h>
void age(int num)
{
	if(num>18)
	{
		printf("\nYou are eligible for voting");
	}
	else
	{
		printf("\nYou are not eligible for voting");
	}
}
int main()
{
	int a;
	printf("\nEnter the age = ");
	scanf("%d",&a);
	
	age(a);	
	return 0;
}

#include<stdio.h>
int main()
{
	int num1,num2,choice,i;
	printf("\nEnter the value in num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value in num2 = ");
	scanf("%d",&num2);
	
	printf("\n\n1.Even numbers");
	printf("\n2.Odd numbers");
	printf("\nEnter your choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			for(i=num1;i<=num2;i++)
			{
				if(i%2==0)
				{
					printf("%d ",i);
				}
			}
		break;
		case 2:
			for(i=num1;i<=num2;i++)
			{
				if(i%2!=0)
				{
					printf("%d ",i);
				}
			}
		break;
	}
	return 0;
}

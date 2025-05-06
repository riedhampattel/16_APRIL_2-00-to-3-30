#include<stdio.h>
int main()
{
	int a[100],b[100],ans[100];
	float c[100];
	int size,choice,i;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	printf("\nEnter the elements in array a :=");
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the elements in array b :=");
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	up:
	printf("\n1.Addition");
	printf("\n2.subtraction");
	printf("\n3.multiplication");
	printf("\n4.division");
	printf("\nEnter your choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			for(i=0;i<size;i++)
			{
				ans[i] = a[i] + b[i];
			}
		break;
		case 2:
			for(i=0;i<size;i++)
			{
				ans[i] = a[i] - b[i];
			}
		break;
		case 3:
			for(i=0;i<size;i++)
			{
				ans[i] = a[i] * b[i];
			}
		break;
		case 4:
			for(i=0;i<size;i++)
			{
				c[i] = (float)a[i] / (float)b[i];
			}
		break;
	}
	printf("\nArray a = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nArray b = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",b[i]);
	}
	if(choice == 4)
	{
		printf("\nArray ans = ");
		for(i=0;i<size;i++)
		{
			printf("%.2f ",c[i]);	
		}	
	}
	else
	{
		printf("\nArray ans = ");
		for(i=0;i<size;i++)
		{
			printf("%d ",ans[i]);
		}	
	}
	char ch;
	printf("\nPress 'y' to continue or 'n' to exit = ");
	scanf(" %c",&ch);
	if(ch=='y' || ch=='Y')
	{
		goto up;
	}
	return 0;
}

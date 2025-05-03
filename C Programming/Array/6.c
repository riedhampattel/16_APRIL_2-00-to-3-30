#include<stdio.h>
int main()
{
	int size,a[100],i,sum=0;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the elements in a[%d] = ",i);
		scanf("%d",&a[i]);
		sum = sum + a[i];
	}
	printf("\nElements of an array = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nAddition of all the elements = %d",sum);
	printf("\nAverage of all the elements = %.2f",(float)sum/size);
	return 0;
}

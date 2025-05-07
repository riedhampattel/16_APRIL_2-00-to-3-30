#include<stdio.h>
int main()
{
	int a[100],size,i,j;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nArray a = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nSorted array in ascending order = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nSorted array in descending order = ");
	for(i=size-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	printf("\nMinimum element = %d",a[0]);
	printf("\nMaximum element = %d",a[size-1]);
	return 0;
}

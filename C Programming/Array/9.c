#include<stdio.h>
int main()
{
	int a[100],size,i,element,flag=1;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the element = ");
	scanf("%d",&element);//3
	for(i=0;i<size;i++)
	{
		if(element == a[i])
		{
			printf("\n%d is present on index %d",element,i);
			flag=0;
		}
	}
	if(flag==1)
	{
		printf("\nElement is not present in an array");
	}
	return 0;
}

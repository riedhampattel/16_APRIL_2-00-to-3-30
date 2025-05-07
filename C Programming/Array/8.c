#include<stdio.h>
int main()
{
	int a[100],size,i;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);//5
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	int index;
	printf("\nEnter the index number = ");
	scanf("%d",&index);//3
	if(index>=0 && index<size)
	{
		printf("\n%d is present on %d index",a[index],index);
	}
	else
	{
		printf("\n%d is an invalid index number",index);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		printf("\nEnter the element on a[%d] = ",i);
		scanf("%d",&a[i]);
	}//scanning
	for(i=0;i<5;i++)
	{
		printf("\nValue at a[%d] = %d",i,a[i]);
	}
	return 0;
}

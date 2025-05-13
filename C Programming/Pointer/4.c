#include<stdio.h>
int main()
{
	int a[5] = {1,2,3,4,5};
	int i;
	int* ptr = &a;
	printf("\nAddress of a = %p",ptr);
	for(i=0;i<5;i++)
	{
		printf("\nAddress of a[%d] = %p",i,&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\nElement on a[%d] = %d",i,*ptr+i);
	}
	return 0;
}

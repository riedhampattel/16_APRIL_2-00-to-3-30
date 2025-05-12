#include<stdio.h>
void print(int arr[],int size)
{
	int i;
	printf("\nElements of an array = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int a[5] = {1,2,3,4,5};
	int b[5] = {6,7,8,9,10};
	int c[5] = {11,22,33,44,55};
	
	print(c,5);
	return 0;
}

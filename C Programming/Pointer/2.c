#include<stdio.h>
void swapping(int *n1,int *n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
int main()
{
	int a=10,b=20;
	int* ptr1=&a,ptr2=&b;
	printf("\nValue of a before swapping = %d",a);
	printf("\nValue of b before swapping = %d",b);
	swapping(ptr1,ptr2);
	printf("\nValue of a after swapping = %d",a);
	printf("\nValue of b after swapping = %d",b);
	return 0;
}

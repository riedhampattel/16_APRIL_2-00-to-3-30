#include<stdio.h>
int main()
{
	int term,n1=0,n2=1,n3,i;
	printf("Enter the terms = ");
	scanf("%d",&term);//5
	printf("Fibonacci series = %d %d ",n1,n2);
	//0 1 1 2 3
	for(i=1;i<=term-2;i++)//4/3
	{
		n3 = n1 + n2;
		printf("%d ",n3);
		n1 = n2;
		n2 = n3;
	}
	return 0;
}

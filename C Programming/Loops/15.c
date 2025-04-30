#include<stdio.h>
int main()
{
	int row,col,i,j;
	printf("Enter the row number = ");
	scanf("%d",&row);//3
	printf("Enter the col number = ");
	scanf("%d",&col);//2
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

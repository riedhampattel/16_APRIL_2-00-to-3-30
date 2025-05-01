/*
Write a c program to take row numbers from the user and print the following pyramid pattern.

    *
   * *
  * * *
 * * * *
* * * * *
*/
#include<stdio.h>
int main()
{
	int row,i,j,k,spc;
	printf("\nEnter the row number = ");
	scanf("%d",&row);//3
	spc = row-1;
	for(i=1;i<=row;i++)
	{
		for(k=1;k<=spc;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		spc--;//-1
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int start,end,i;
	printf("\nEnter the starting value = ");
	scanf("%d",&start);
	printf("\nEnter the ending value = ");
	scanf("%d",&end);
	
	if(start<end)
	{
		for(i=start;i<=end;i++)
		{
			printf("%d ",i);
		}
	}
	else
	{
		for(i=start;i>=end;i--)
		{
			printf("%d ",i);
		}
	}
	return 0;
}

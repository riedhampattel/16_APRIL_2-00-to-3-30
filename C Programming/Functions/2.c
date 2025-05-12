#include<stdio.h>
//2.with return type and without argument
float div();//declaration

float div()
{
	int n1,n2;
	printf("\nEnter the value in n1 = ");
	scanf("%d",&n1);
	printf("\nEnter the value in n2 = ");
	scanf("%d",&n2);
	
	float ans = (float)n1/(float)n2;
	return ans;
}

int main()
{
	float ans=div();
	printf("\nThe division is = %.2f",ans);
	return 0;
}

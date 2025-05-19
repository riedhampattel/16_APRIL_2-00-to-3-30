#include<stdio.h>
struct Student
{
	int id;
	char name[50];
	float percentage;
}s[100];
int main()
{
	int count,i;
	printf("\nEnter the count of students = ");
	scanf("%d",&count);
	for(i=0;i<count;i++)
	{
		printf("\nEnter the roll no. = ");
		scanf("%d",&s[i].id);
		printf("\nEnter the name = ");
		scanf("%s",&s[i].name);
		printf("\nEnter the percentage = ");
		scanf("%f",&s[i].percentage);
	}
	for(i=0;i<count;i++)
	{
		printf("\nId = %d",s[i].id);
		printf("\nName = %s",s[i].name);
		printf("\nPercentage = %.2f",s[i].percentage);
	}
	return 0;
}

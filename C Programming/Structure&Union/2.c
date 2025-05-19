#include<stdio.h>
struct Student
{
	int roll;
	char name[50];
	float percentage;	
};
int main()
{
	struct Student s1;
	s1.roll = 101;
	printf("\nEnter the name = ");
	scanf("%s",s1.name);
	s1.percentage = 98.65;
	
	printf("\nRoll no. = %d",s1.roll);
	printf("\nName = %s",s1.name);
	printf("\nPercentage = %.2f",s1.percentage);
	return 0;
}

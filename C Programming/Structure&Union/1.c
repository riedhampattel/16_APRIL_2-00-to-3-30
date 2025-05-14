#include<stdio.h>
struct Student
{
	int roll;
	float percentage;
	char grade;
};
int main()
{
	int a;
	struct Student s1;
	s1.roll = 101;
	s1.percentage = 98.56;
	s1.grade = 'A';
	
	printf("\nRoll no. = %d",s1.roll);
	printf("\nPercentage = %.2f",s1.percentage);
	printf("\nGrade = %c",s1.grade);
	return 0;
}

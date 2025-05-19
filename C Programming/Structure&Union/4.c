#include<stdio.h>
struct Student
{
	int id;
	char name[20];
	int percentage;
}s[100];
int index=0;
int main()
{
	up :
	printf("\n1. Add new students");
	printf("\n2. Display all students");
	printf("\n3. Display particullar student");
	printf("\n4. Update student");
	printf("\n5. Delete student");
	int choice;
	printf("\nEnter your choice = ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			addnew();		
		break;
		case 2:
			displayall();
		break;
	}
	char select;
	printf("\nPress 'Y' to continue and 'N' to exit = ");
	scanf(" %c",&select);
	if(select=='y' || select=='Y')
	{
		goto up;
	}
	return 0;
}

void addnew()
{
	int count,i;
	printf("\nEnter the count = ");
	scanf("%d",&count);
	for(i=0;i<count;i++)
	{
		printf("\nEnter the roll no. = ");
		scanf("%d",&s[index].id);
		printf("\nEnter the name = ");
		scanf("%s",s[index].name);
		printf("\nEnter the percentage = ");
		scanf("%d",&s[index].percentage);
		index++;
	}
}

void displayall()
{
	int i;
	printf("\n---------------------------");
	printf("\nID  |  NAME   |  PERCENTAGE");
	printf("\n---------------------------");
	for(i=0;i<index;i++)
	{
		printf("\n%d  |   %s    |  %d",s[i].id,s[i].name,s[i].percentage);
	}
	printf("\n---------------------------");
}

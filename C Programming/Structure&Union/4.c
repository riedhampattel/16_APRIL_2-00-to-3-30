#include<stdio.h>
#include<string.h>
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
		case 3:
			display();
		break;
		case 4:
			update();
		break;
		case 5:
			deleted();
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

void display()
{
	int id,i;
	printf("\nEnter the id = ");
	scanf("%d",&id);
	printf("\n---------------------------");
	printf("\nID  |  NAME   |  PERCENTAGE");
	printf("\n---------------------------");
	for(i=0;i<index;i++)
	{
		if(id==s[i].id)
		{
			printf("\n%d  |   %s    |  %d",s[i].id,s[i].name,s[i].percentage);	
		}
	}
	printf("\n---------------------------");
}

void update()
{
	int choice,id,i;
	char change[50];
	int per;
	printf("\n1.Update your name");
	printf("\n2.Update your percentage");
	printf("\nEnter your choice = ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nEnter the id = ");
			scanf("%d",&id);
			printf("\nUpdated name = ");
			scanf("%s",change);
			for(i=0;i<index;i++)
			{
				if(id==s[i].id)
				{
					strcpy(s[i].name,change);
				}
			}
		break;
		case 2:
			printf("\nEnter the id = ");
			scanf("%d",&id);
			printf("\nUpdated percentage = ");
			scanf("%d",&per);
			for(i=0;i<index;i++)
			{
				if(id==s[i].id)
				{
					s[i].percentage = per;
				}
			}
		break;
	}
}
void deleted()
{
	int id,i,ind;
	int j = index;
	printf("\nEnter the id = ");
	scanf("%d",&id);
	for(i=0;i<index;i++)
	{
		if(id==s[i].id)
		{
			ind = i;
		}
	}
	for(i=ind;i<j;i++)
	{
		s[i].id = s[i+1].id;
		strcpy(s[i].name,s[i+1].name);
		s[i].percentage = s[i+1].percentage;
	}
	index--;
}

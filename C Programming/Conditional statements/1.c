#include<stdio.h>
int main()
{
	int choice;
	printf("\nEnter the day = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\nMonday");	
		break;
		case 2:
			printf("\nTuesday");	
		break;
		case 3:
			printf("\nWednesay");	
		break;
		case 4:
			printf("\nThursday");	
		break;
		case 5:
			printf("\nFriday");	
		break;
		case 6:
			printf("\nSaturday");	
		break;
		case 7:
			printf("\nSunday");	
		break;
		default :
			printf("\nInvalid input");
	}
	return 0;
}

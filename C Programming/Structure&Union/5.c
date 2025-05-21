#include<stdio.h>
struct Demo
{
	int nums;
	char chs;	
};
union Demo1
{
	int numu;
	char chu;
};
int main()
{
	struct Demo d;
	union Demo1 u;
	d.nums = 68;
	u.numu = 68;
	
	u.chu = 'A';
	
	printf("\nStructure :=");
	printf("\nValue of nums = %d",d.nums);
	printf("\nValue of chs = %c",d.chs);
	
	printf("\n\nUnion :=");
	printf("\nValue of numu = %d",u.numu);
	printf("\nValue of chu = %c",u.chu);		
	return 0;
}

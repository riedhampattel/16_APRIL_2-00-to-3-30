#include<stdio.h>
int main()
{
	FILE *fp;
	fp = fopen("first.txt","w");
	fprintf(fp,"\nHello this is my second file");
	fclose(fp);
	return 0;
}
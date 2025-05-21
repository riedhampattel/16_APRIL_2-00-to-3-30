#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("second.txt","a");
    fprintf(fp,"\nHello this is my fourth file");
    fclose(fp);
    return 0;
}
#include<stdio.h>
int main()
{
    FILE *fp;
    char str[100];
    fp = fopen("second.txt","r");
    if(fp==NULL)
    {
        printf("\nFile doesn't exist");
    }
    else
    {
        while(fgets(str,sizeof(str),fp))
        {
            printf("%s",str);
        }       
    }
    return 0;
}
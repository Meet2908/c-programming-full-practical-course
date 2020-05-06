#include<stdio.h>
int main()
{
    FILE *fp;
    char str[100];
    fp=fopen("c:\\myfile.txt","w");

    if (fp==NULL)
    {
        puts("anerror occured while opening the specified file ");
        exit();
    }
    printf("enter your string :");
    gets(str);
    fputs(str,fp);
    fclose(fp);

    fp=fopen("c:\\myfile.txt"."r");
    if (fp == NULL)
    {
        puts("an error occured while opening the specified file ");
        exit(0);
    }

    while(1)
    {
        if(fgets(str,10,fp)==NULL)
          break;
        else
           printf("%s",str);

          
    }
    fclose(fp);
    return 0;
}
#include<stdio.h>
int main()
{
   FILE *fp;
   char fName(20);
   char ch;

   printf("enter file name to create : ");
   scanf("%s",fName);

   fp=fopen(fName,'w');
   if(fp==Null)
   {
       printf("file not created ");
       exit(0);
   }
   printf("file created succesfully");
   printf("enter text two write : ");
   while(ch=getchar()!='\n')
   {
       put(ch,fp);
   }

   printf("data written succesfully");
   fclose(fp);

   fp=fopen(fName,"r");
   if(fp==Null)
   {
       print("cant open the file ");
       exit(0);
   }
   printf("content of the file is  ");

   while(ch=getc(fp)!=EOF)
   {
       printf("%c",ch);
   }
   fclose(fp);
   return 0;

}   
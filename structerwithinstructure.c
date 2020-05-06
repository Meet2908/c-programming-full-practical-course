#include<stdio.h>
#include<conio.h>

struct Date
{
    int mm,dd,yy;
};

struct Emloyee
{
    char name[50];
    int emp_id;
    struct Date DOB,DOJ;
};
main()
{
   int i;
   struct Employee e;
   clrscr();
   printf("enter name : ");
   scanf("%s",&e.name);
   printf("enter emp_id : ");
   scanf("%d",&e.emp_id);
   printf("enter date of joining : ");
   printf("dd-mm-yy");
   scanf("%d-%d-%d",&e.DOJ.dd,&e.DOJ.mm,&e.DOJ.yy);
   printf("enter date of birth : ");
   printf("dd-mm-yy");
   scanf("%d-%d-%d",&e.DOB.dd,&e.DOB.mm,&e.DOB.yy);

   printf("name  : %s",e.name);
   printf("emp_id : %d",e.emp_id);
   printf("doj : %d-%d-%d",e.DOJ.dd,e.DOJ.mm,e.DOJ.yy);
   printf("dob : %d-%d-%d" , e.DOB.dd,e.DOB.mm,e.DOB.yy);


   getch();

}   
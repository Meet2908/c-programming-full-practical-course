#include<stdio.h>
#include<conio.h>
main()
{
    int n;
    clrscr();
    print("Enter number....");
    scanf("%1d",&n);
    switch(n)
       {
           case 0:printf("zero");break;
           case 1:printf("one");break;
           case 2:printf("two");break;
           case 3:printf("three");break;
           case 4:printf("four");break;
       }
       getch();
    
}
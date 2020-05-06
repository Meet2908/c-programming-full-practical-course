#include<stdio.h>
#include<conio.h>
main()
{
    int roll_no,m1,m2,m3,total;
    float average;
    printf("enter your roll number");
    scanf("%d",&roll_no);
    printf("enter marks 1: ");
    scanf("%d",&m1);
    printf("enter marks 2: ");
    scanf("%d",m2);
    printf("enter marks 3: ");
    scanf("%d",&m3);
    total=m1+m2+m3;
    average=total/3.0;
    printf("\nenter your roll number: %d",roll_no);
    printf("\n marks 1: %d",m1);
    printf("\nmarks 2: %d",m2);
    printf("\nmarks 2 : %d",m3);
    printf("\ntotal is : %d",total);
    printf("\naverage is : %f",average);
    getch();


    

}
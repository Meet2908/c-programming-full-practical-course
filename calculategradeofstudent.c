#include<stdio.h>
#include<conio.h>
main()
{
    int Rollnumber,m1,m2,m3,total;
    float average;
    printf("enter a student roll  number : ");
    scanf("%d",&Rollnumber);
    printf("enter marks of three subject : ");
    scanf("%d%d%d",&m1,&m2,&m3);
    total=m1+m2+m3;
    average=total/3;
    printf("\ntotal is :%d",total);
    printf("\naverage is :%5.2f",average);
    if(average>=60)
    {
        printf("\nyour grade is A");
    }
    else if((average>=50)&&(average<=60))
    {
        printf("\nyour grade is B");
    }
    else if((average>=40)&&(average<=50))
    {
        printf("\nyour grade is C");
    }
    else
    {
        printf("\nyour grade is F");
    }
    getch();

}
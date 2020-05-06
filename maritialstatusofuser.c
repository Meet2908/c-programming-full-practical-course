#include<stdio.h>
#include<conio.h>
main()
{
    int age;
    char maritialstatus,gender;
    printf("enter detail maritialstatus,gender,age :  ");
    scnaf("%c%c%d",&maritialstatus,&gender,&age);
    if(maritialstatus=='m')
    {
        printf("\nyou can not marry : ");
    }
    else if(maritialstatus=='u')
    {
        if(gender=='m')
        {
            if(age>=21)
            {
                printf("\nyou can marry ");
            }
            else{
                printf("you cant marry ");
            }
        }
        else if(gender=='f')
        {
            if(age>=18)
            {
                printf("\nyou can marry");
            }
            else{
                printf("youcant marry");
            }
        }
        else
        {
           printf("\n invalid input gender:");
        }
         
    }
    else
    {
        printf("invalid martial status");
    }
    getch();
}
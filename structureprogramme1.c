#include<stdio.h>
#include<conio.h>

struct Employee
{
    char name[20];
    int emp_id;
    long phone_no;
};

main()
{
    struct Employee e;
    printf("enter name : ");
    scanf("%s",&e.name);
    printf("enter  emp_id : ");
    scanf("%d",&e.emp_id);
    printf("enter phone number : ");
    scanf("%ld",&e.phone_no);

    printf("\nenter name : %s",e.name);
    printf("\nenter emp_id: %d",e.emp_id);
    printf("\nenter phone number : %ld",e.phone_no);
}
#include<stdio.h>
#include<conio.h>
main()
{
    int age;
    printf("Enter your age..");
    scanf("%d",&age);

    if(age<0)
        goto invalidator;
     printf("you have entered ageas.. %d",age);

     invalidator:
        printf("Wrong entry!");   
}
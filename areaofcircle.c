#include<stdio.h>
#include<conio.h>
main()
{
    float AREA,R;
    clrscr();
    printf("enter a radius: ");
    scanf("%f",&R);
    AREA=3.14*R*R;
    printf("area of the given is : %6.2f",AREA);
    getch;
}
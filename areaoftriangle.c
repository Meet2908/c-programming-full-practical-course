#include<stdio.h>
#include<conio.h>
main()
{
    float AREA,B,H;
    printf("enter base & height");
    scanf("%f%f",&B,&H);
    AREA=0.5*B*H;
    printf("AREA of triengle is : %6.2f",AREA);
    getch();
}
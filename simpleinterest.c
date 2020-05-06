#include<stdio.h>
#include<conio.h>
main()
{
    float SI,P,R,N;
    printf("enter values of P,R and N");
    scanf("%f%f%f",&P,&R,&N);
    SI=(P*R*N)/100;
    printf("simple interest is : %6.2",SI);
    getch();
}
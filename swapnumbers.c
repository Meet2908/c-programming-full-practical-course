#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,temp;
    printf("enter values : ");
    scanf("%d%d",&a,&b);
    printf("\n before swapping \na=%d,\nb=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nafter swapping \na=%d,\nb=%d",a,b);
    getch();
}

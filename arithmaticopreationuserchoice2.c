#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;
    char op;
    clrscr();
    printf("enter oprertor(+,-,*,/)...");
    scanf("%c",&ch);
    printf("enter number..");
    scanf("%d%d",&a,&b);
    switch(op)
    {
        case '+':printf("Result:%d",a+b);break;
        case '-':printf("Result:%d",a-b);break;
        case '*':printf("Result:%d",a*b);break;
        case '/':printf("Result:%d",a/b);break;
        default:printf("invalid charecter ");
    }
    getch();
}
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d", &a, &b);
    if(a>b)
    {
        printf("a is greter then b");
    }
    else if(a<b)
    {
        printf("a is less than b");
    }
    else
    {
        printf("a is equal to b");
    }
    getch();
    

}

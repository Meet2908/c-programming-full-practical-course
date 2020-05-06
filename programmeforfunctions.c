#include<stdio.h>
#include<conio.h>
int add(int x,int y)
{
    return(x+y);
}
int sub(int x,int y)
{
    return(x-y);
}
int mul(int x,int y)
{
    return(x*y);
}
int div(int x,int y)
{
    return(x/y);
}

main()
{
    int a,b;
    clrscr();
    printf("Enter number:\n");
    scanf("%d%d",&a&b);
    printf("\nAddition  :%d\n",add(a,b));
    printf("\nsubstraction :%d\n",sub(a,b));
    printf("\nmultiplecation :%d\n",mul(a,b));  
}
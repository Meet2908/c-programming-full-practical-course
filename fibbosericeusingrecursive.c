#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

fiboo(int pre,int cur,int x)
{
    int temp;
    if(x==2)
    {
        getch();
        exit(0);
    }

    temp=cur;
    cur=pre+cur;
    pre=temp;
    printf("%d",cur);
    fiboo(pre,cur,x-1);
}







main()
{
    int n,pre=0;cur=1;
    clrscr();
    printf("enter number :");
    scanf("%d",&n);
    printf("%d%d",pre,cur);
    fiboo(pre,cur,x-1);
    getch();
}
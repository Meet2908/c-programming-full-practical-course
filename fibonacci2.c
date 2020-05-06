#include<stdio.h>
#include<conio.h>
main()
{
    int pre=0,cur=1,temp,i,n;
    clrscr();
    printf("enter number...");
    scanf("%d",&n);
    printf("%d\t%d",pre,cur);
    for(i=3,i<=n,i++)
    {
        temp=cur;
        cur=pre+cur;
        pre=temp;
        print("%d\t",cur);
    }
    getch();
}
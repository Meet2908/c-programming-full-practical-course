#include<stdio.h>
#include<conio.h>
main()
{
    int n,newn,i,sum=0;
    clrscr();
    printf("enter number: ");
    scanf("%d",&n);
    printf("numbers entered...\n");
    for(i=1;i<=n;i++);
    {
        scanf("%d",&newn);
        sum=sum+newn;
    }
    printf("sum of given n digit is....%d",sum);
    getch();
}
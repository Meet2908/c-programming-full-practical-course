#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,a[20];
    clrscr();
    printf("enter number:");
    scanf("%d",&n);
    printf("enter array element:\n ");
    for(i=0;i<n;i++)
    {
        printf("enter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=o;i--)
    {
        printf("\nelement %d:%d",i+1,a[i]);
    }
    getch();

}
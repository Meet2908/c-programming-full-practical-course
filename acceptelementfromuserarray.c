#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,a[20];
    clrscr();
    printf("enter number...");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        printf("enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\nelement %d:%d",i+1,a[i]);

    }
    getch();
}
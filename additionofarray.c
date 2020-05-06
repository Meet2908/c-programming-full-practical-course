#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,a[20],sum=0;
    clrscr();
    printf("enter number..");
    scanf("%d",&n);
    printf("enter array element:\n");
    for(i=0;i<n;i++)
    {
        printf("enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        printf("\nsum of given array element is :%d ",sum);
        
    }
    getch();
}
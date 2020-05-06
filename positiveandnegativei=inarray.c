#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,a[20];
    clrscr();
    printf("enter number:");
    scanf("%d",&n);
    printf("enter element");
    for(i=0;i<n;i++)
    {
        printf("the element %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nnegatie element:\n");
    for(i=0;i<n;i++)
       if(a[i]<0)
           printf("\n%d",a[i]);
    printf("\npositive element:\n");
    for(i=0;i<n;i++)
         if(a[i]>0)
             printf("\n%d",a[i]);       
}
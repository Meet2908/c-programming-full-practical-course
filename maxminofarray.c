#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,a[20],max,min;
    clrscr();
    printf("enter number: ");
    scanf("%d",&n);
    printf("enter element: ");
    for(i=0;i<n;i++)
    {
        printf("enter array element: %d",i+1);
        scanf("%d",&a[i]);
    }
    for(i=o;i<n;i++)
    {
        if(a[i]>max)
             max=a[i];
        if(a[i]<min)
            min=a[i];
            
             
    }
    printf("\nmax:%d",max);
    printf("\nmin:%d",min);

    getch();
}
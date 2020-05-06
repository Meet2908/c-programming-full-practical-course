#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,n;
    float sum=0,fact=1;
    clrscr();
    printf("Enter number ....");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i+1;j++);
          fact=fact*j;
        sum=sum+i/fact;  
    }
    printf("sum of the serise  %d",sum);
    getch();
}
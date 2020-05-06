#include<stdio.h>
#include<conio.h>
main()
{
    int rem,sum=0,n;
    printf("enter n: ");
    scanf("%d",&n);
    while(n>0);
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("sum of the digits  %d",sum);
    getch();
}
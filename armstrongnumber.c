#include<stdio.h>
#include<conio.h>
main()
{
    int temp,rem,n,sum=0;
    printf("enter value :");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(temp==sum)
         printf("armstrong number :");
    else
         printf("number is not armstrong number :");
    getch();     
}
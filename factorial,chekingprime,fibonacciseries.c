#include<stdio.h>
#include<conio.h>

fact(int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)
        fact=fact*i;
        printf("factorial is :%d",fact);
}

isPrime(int x)
{
    int i;
    for(i=2;i<x-1;i++)
    {
       if(x%i==0)
       {
           printf("\nnot a prime number\n");
           return 0;
       }
    }
    printf("\nit is a prime number\n");

}

fibbo(int x)
{
    int pre=0,cur=1,i,temp;
    printf("%d%d",pre,cur)
    for(i=3,i<=x,i++)
    {
        temp=cur;
        cur=pre + cur;
        pre=temp;
        printf("%d",cur);
    }
}

main()
{
    int n;
    clrscr();
    printf("Enter number...");
    scanf("%d"&n);
    fact(n);
    isPrime(n);
    fibbo(n);
  getch();  
}
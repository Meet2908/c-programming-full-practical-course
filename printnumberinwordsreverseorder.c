#include<stdio.h>
#include<conio.h>
main()
{
    int n,rem;
    clrscr();
    printf("enter number...");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        switch(rem)
        {
            case 0:printf("zero");break;
            case 1:printf("one");break;
            case 2:printf("two");break;
            case 3:printf("three");break;
            case 4:printf("four");break;
            case 5:printf("five");break;
        }
        n=n/10
    }
    getch();
}
#include<stdio.h>
#include<conio.h>
main()
{
    int i=1,n;
    printf("enter value : ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\t",i);
        i=i+2;
    }
    getch();
}
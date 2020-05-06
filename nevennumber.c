#include<stdio.h>
#include<conio.h>
main()
{
    int i=2,n;
    printf("enter values :");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\t",i);
        i=i+2;
    }
    getch();
}
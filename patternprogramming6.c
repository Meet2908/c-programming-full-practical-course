#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k,n;
    printf("enter value : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++);
    {
        for(k=i;k<=(n-i);k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=2;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}
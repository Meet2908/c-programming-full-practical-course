#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,n,k;
    clrscr();
    printf("enter number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
             printf("%d",i);
             printf("\n");
        }
    }
    getch();

}
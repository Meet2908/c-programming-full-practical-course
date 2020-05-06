#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,n;
    clrscr();
    printf("enter number   ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",&n);
        }
        printf("1\n");
    }

    getch();
}
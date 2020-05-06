#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,m,a[i][j],sum=0;
    clrscr();
    printf("enter matrix order: ");
    scanf("%d",&m);
    printf("enter matrix element : ");
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
           scanf("%d",&m);

    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
           if(i<=j)
              sum=sum+a[i][j];

    printf("\nsum of the upper matrix element %d ",sum);

    getch();





}  
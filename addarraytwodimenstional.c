#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,m,n,a[5][5],sum=0;
    clrscr();
    printf("enter order of matrix");
    scanf("%d%d",&m&n);
    printf("enter element..\n");
    for(i=0;i<m;i++)
       for(j=0;j<n;j++)
           scanf("%d",&a[i][j]);

    for(i=0;i<m;i++)
       for(j=0;j<n;j++)
         sum=sum+a[i][j];

    printf("\nsum of the matrix element: %d",sum);
    getch();            
}
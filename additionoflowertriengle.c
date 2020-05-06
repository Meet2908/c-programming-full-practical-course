#include<stdio.h>
#include<conio.h>
main()
{
    int,i,j,m,a[i][j],sum=0;
    clrscr();
    printf("enter order of matrix : ");
    scanf("%d",&m);
    printf("enter element: ");
    for(i=0;i<m;i++)
       for(j=0;j<m;j++)
          scanf("%d",&m);

    for(i=0;i<m;i++)
      for(j=0;j<m;j++)
         if(j<=i)
           sum=sum+a[i][j];

    printf("the sum of lower triengle element %d ",sum);
    getch();             
}
#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,m,a[5][5],sum=0;
    clrscr();
    printf("enter matrix order: ");
    scanf("%d",&m);
    printf("enter element: ");
    for(i=0;i<m;i++)
      for(j=0;j<m;j++)
          scanf("%d",&a[i][j]);

    for(i=0;i<m;i++)
       for(j=0;j<m;j++)
          if(i==j)
            sum=sum+a[i][j];

    printf("sum of the given diaolugbox is %d ",sum);


    getch();              
}
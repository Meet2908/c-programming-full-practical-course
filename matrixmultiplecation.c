#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,m,a[5][5],b[5][5],c[5][5];
    clrscr();
    printf("enter of maxrix order: ");
    scanf("%d",&m);
    printf("enter first matrix element: ");
    for(i=0;i<m;i++)
       for(j=0;j<m;j++)
          scanf("%d",&a[i][j]);

    printf("enter second matrix element :");
    for(i=0;i<m;i++)
       for(j=0;j<m;j++)
         scanf("%d",&b[i][j]);

    

    
    
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)

           c[i][j]=0;
           for(k=0;k<m;k++)
           c[i][j]=c[i][j]+a[i][k]+b[k][j];

    printf("resultant matrix : ");
        for(i=0;i<m;i++)
          for(j=0;j<m;j++)
           
             printf("%d",c[i][j]);
             printf("\n");

    getch();         


}
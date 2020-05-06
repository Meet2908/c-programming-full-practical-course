#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,m,n,a[5][5];
    clrscr();
    printf("enter matrix order : ");
    scanf("%d%d",&m,&n);
    printf("enter element: ");
    for(i=0;i<m;i++)
      for(j=0;j<n;j++)
        scanf("%d",a[i][j]);

    for(i=0;i<m;i++)
       for(j=0;j<n;j++)
         printf("%d",a[j][i]);
       printf("\n");


    getch();        
              


          

}
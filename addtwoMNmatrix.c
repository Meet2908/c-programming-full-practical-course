#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,m,n,a[5][5],b[5][5],c[5][5];
    clrscr();
    printf("enter order of matrix :");
    scanf("%d%d",&m,&n);
    printf("enter matrix element of first matrix :");
    for(i=0;i<m;i++)
       for(j=0;j<n;j++)
          scanf("%d",&a[i][j]);

    printf("enter matrix element of second matrix :");
    for(i=0;i<m;i++)
       for(j=0;j<n;j++)
           scanf("%d",a[i][j]);

    for(i=0;i<m;i++)
       for(j=0;j<n;j++)
         c[i][j]=a[i][j]+b[i][j];

    printf("\nresultant metrix: ");
    for(i=0;i<m;i++)
    {
       for(j=o;j<n;j++)
        printf("%d",c[i][j]);
       printf("\n"); 
    }                      
}
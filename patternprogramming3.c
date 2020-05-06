#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,n;
    printef("enter number : ");
    scanf("%d",&n);
    for(i=n;i<=n;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    getch();
}
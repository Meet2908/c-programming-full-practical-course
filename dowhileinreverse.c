#include<stdio.h>
#include<conio.h>
main()
{
    int i=1,n;
    printf("enter value :");
    scanf("%d",&n);
    i=n;
    do{
        printf("%d\t",i);
        i--;
    }while(i>=1);
    getch();
}


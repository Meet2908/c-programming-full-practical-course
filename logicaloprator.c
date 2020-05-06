#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    printf("enter values  of a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        if(b>c)
        {
            printf("desending order is %d%d%d" ,a,b,c);
            printf("assending order is %d%d%d",c,b,a);
        }
        else{
            printf("desending order is %d%d%d",a,c,b);
            printf("assending order is %d%d%d",b,c,a);
        }
    }
    else if((b>a)&&(b>c))
    {
        if(a>c)
        {
            printf("desending order is %d%d%d",b,a,c);
            printf("assending order is %d%d%d",c,a,b);
        }
        else
        {
            printf("desending order is %d%d%d",b,c,a);
            printf("assending order is %d%d%d",a,c,b);
        }
        
    }
    else if((c>a)&&(c>b))
    {
        if(a>b)
        {
            printf("desending order is %d%d%d",c,a,b);
            printf("assending order is %d%d%d",b,a,c);
        }
        else{
            printf("desending order is %d%d%d",c,b,a);
            printf("assending order is %d%d%d",c,a,b);
        }
    }
    getch();
}
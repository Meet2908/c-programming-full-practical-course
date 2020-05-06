#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,newn,sum_avg=0;
    float avg;
    printf("Enter number... ");
    scanf("%d",&n);
    printf("enter number : ");
    for(i=1;i<n;i++)
    {
         scanf("%d",&n);
         sum_avg=sum_avg + newn;
    }
    avg=sum_avg/(float)n;

    printf("\n Average = %f",avg);
    getch();
}
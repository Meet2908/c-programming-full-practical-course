#include<stdio.h>
#include<conio.h>

swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}









main()
{
    int a,b;
    printf("enter number :");
    scanf("%d%d",a,b);
    printf("before swwaping a=%d and b=%d :  "a,b);
    swap(&a,&b);
    printf("after swapping a=%d and b=%d : ",a,b);
    getch();
}
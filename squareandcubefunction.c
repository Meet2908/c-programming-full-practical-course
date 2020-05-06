#include<stdio.h>
#include<conio.h>

int square(int x)
{
     return(x*x);
}
int cube(int x)
{
    return(x*x*x)
}
main()
{
    int n;
    clrscr();
    printf("Enter number ...");
    scanf("%d",&n);
    printf("\nSquare :%d\n",square(n));
    printf("\nCube  :%d\n",cube(n));
    getch();
}
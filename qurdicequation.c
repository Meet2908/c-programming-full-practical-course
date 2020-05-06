#include<stdio.h>
#include<conio.h>
main()
{
    int x,r1,r2,a,b,c;
    printf("enter value a,b,c : ");
    scanf("%f%f%f",&a,&b,&c);
    x=b*b-4*a*c;
    r1=((-b+x)/2*a);
    r2=((-b-x)/2*a);
    if(x>0)
         print("roots are unequal: ");
    else if(x<0)
          printf("roots are imaginary");
    else
        printf("roots are equale");  
    printf("\n roots 1 is %f",r1);
    printf("\n roots 2 is %f",r2);    
    getch();
}
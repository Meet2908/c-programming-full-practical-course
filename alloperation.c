#include<stdio.h>
#include<conio.h>
int main()
  {    int n,num1,num2,result;
      char option;
     do{
        printf("/nenter condition what you want to do/n");
        printf("press 1 condition for addition :");
        printf("press 2 condition for multiplecation :");
        printf("press 3 condition for division  :");
        printf("press 4 condition for modulo :");
        printf("press 5 condition for substaction :");
        scanf("%d",n);
        printf("enter a num1: ");
        scanf("%d",&num1);
        printf("enter a num2: ");
        scanf("%d",&num2);
        switch(n)
        {
            case 1:result=num1+num2;
                   printf("addition of two number is %d",result);
                   break;
            case 2:result=num1*num2;
                   printf("multiplecation of two number is %d",result);
                   break;
            case 3:result=num1/num2;
                   printf("division of two numbers is %d",result);
                   break;
            case 4:result=num1%num2;
                   printf("modulo of two numbers is %d",result);
                   break;
            case 5:result=num1-num2;
                   printf("substraction o tw numbers is %d",result);
                   break;
            default:printf("wrong input");                                     
        }
        printf("\n do you wnt to continue y/n?\n");
        option=getche();
}while(option='y');  
        getch();
        return 0;
  }      
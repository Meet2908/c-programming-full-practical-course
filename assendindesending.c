#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,n,min,max,a[20];
    clrscr();
    printf("enter number : ");
    scanf("%d",&n);
    printf("enter element : ");
    for(i=0;i<n;i++)
    {
        printf("the element in array %d");
        scanf("%d",&n);
    }
    max=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]>a[j])
                  temp=a[i];
                  a[i]=a[j];
                  a[j]=temp;
        }
    }

    printf("\nassending order is : ");
      for(i=o;i<n;i++)
      {
          printf("%d",a[i]);
      }

    min=a[0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
          if(a[i]<a[j])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
    }  
    printf("\ndesending order is : ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    getch();
}
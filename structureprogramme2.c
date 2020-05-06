#include<stdio.h>
#include<conio.h>

struct Student;

{
    char name[50];
    int roll_no;
    int m1,m2,m3;
};

main()
{
    int i;
    struct Student s[5];
    for(i=0;i<5;i++)
    {
        printf("enter data for student %d ",i+1);
        printf("enter name : ");
        scanf("%s",&s[i].name);
        printf("enter roll_no : ");
        scanf("%s",&s[i].roll_no);
        printf("enter marks for subject 1 : ");
        scanf("%d",&s[i].m1);
        printf("enter marks for subject 2 : ");
        scanf("%d",&s[i].m2);
        printf("ente marks for subject 3 : ");
        scanf("%d",&s[i].m3);


    }

    for(i=0;i<5;i++)
    {
        printf("%s",s[i].name);
        printf("%d",s[i].roll_no);
        print("%d%d%d",s[i].m1,s[i].m2,s[i].m3);
    }
}
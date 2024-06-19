#include<stdio.h>
#include<conio.h>
void main()
{
     int age;
     printf("Enter your age:");
     scanf("%d",&age);
     age>=18?printf("you are eligible for vote"):printf("you are Not Eligible for vote");
     getch();
}

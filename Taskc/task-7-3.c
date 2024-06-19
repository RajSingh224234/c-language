#include<stdio.h>
#include<conio.h>
void main()
{
     float pamount,rate,days;
     printf("Enter Your Principle Amount:");
     scanf("%f",&pamount);
     printf("Enter Your Rate:");
     scanf("%f",&rate);
     printf("Enter Your Days:");
     scanf("%f",&days);
     float simpleinterest=(pamount*rate*days)/100;
     printf("Your Simple Interest is:%f",simpleinterest);
     getch();
}

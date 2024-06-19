#include<stdio.h>
#include<conio.h>
void main()
{
     int num1,num2;
     printf("Enter The Numerator:");
     scanf("%d",&num1);
     printf("Enter The Denominator:");
     scanf("%d",&num2);
     int quotient,remainder;
     quotient=num1/num2;
     remainder=num1%num2;
     printf("Your Quotient is:%d\n",quotient);
     printf("Your Remainder is:%d\n",remainder);
     getch();
}

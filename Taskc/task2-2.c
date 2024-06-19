#include<stdio.h>
#include<conio.h>
void main()
{
     int dividend,divisor;
     printf("Enter The Given Dividend:");
     scanf("%d",&dividend);
     printf("Enter The Given Divisor:");
     scanf("%d",&divisor);
     int quotient,remainder;
     quotient=dividend/divisor;
     remainder=dividend%divisor;
     printf("The Quotient Of Given Number Is:%d\n",quotient);
     printf("The Remainder Of Given Number Is:%d",remainder);
     getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
    int number,fact=1,i;
    printf("Enter Your Number:");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
            fact*=i;
            }
    printf("The Factorial of Given Number Is:%d\n",fact);
     getch();
}

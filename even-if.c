#include<stdio.h>
#include<conio.h>
void main()
{
     int a;
     printf("Enter The Value Of a:");
     scanf("%d",&a);
     if(a%2==0)
     {
               printf("Yes The Given Number Is Even Number: %d",a);
     }
     else{
               printf("No The Given Number Is Odd Number: %d",a);
          }
     getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
     int num1,num2;
     printf("Enter the Number1:");
     scanf("%d",&num1);
     printf("Enter the Number2:");
     scanf("%d",&num2);
     if(num1>0 && num2>0){
               printf("Both Number Lies in 1st Quadrant ");
               }
     else if(num1<0 && num2>0){
               printf("Both Number Lies in 2nd Quadrant"); 
          }
     else if(num1<0 && num2<0){
               printf("Both Number Lies in 3rd Quadrant");
          }
     else{
               printf("Both Number Lies in 4th Quadrant");
          }
     getch();
}

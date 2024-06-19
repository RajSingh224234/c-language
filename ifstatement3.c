#include<stdio.h>
#include<conio.h>
void main()
{
     int a=0;
     int b=4;
     int sum;
     sum=a+b;
     if(printf("The Value Of Sum Is:%d\n",sum)||sum>b)
     {
        printf("This will happen"); 
     }
     else{
        printf("Try Again");
          }
     getch();
}

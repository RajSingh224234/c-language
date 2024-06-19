#include<stdio.h>
#include<conio.h>
void main()
{
     int year;
     printf("Enter The Year:");
     scanf("%d",&year);
     if(year%4==0 || year%400==0 || year%100==0){
                  printf("Given Year IS a leap Year");
                  }
     else{
          printf("Given Year IS Not a Leap Year");
          }
     getch();
}

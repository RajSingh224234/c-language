#include<stdio.h>
#include<conio.h>
void main()
{
     float day;
     printf("Enter The Number Of Days:");
     scanf("%f",&day);
     float yeardays,weekdays;
     printf("Enter The Number Of Days in a 1 Year:");
     scanf("%f",&yeardays);
     printf("Enter The Number Of Days in a 1 Week:");
     scanf("%f",&weekdays);
     int year,week;
     year=day/yeardays;
     week=day/weekdays;
     printf("Number Of Days Converted into Year is: %d\n",year);
     printf("Number Of Days Converted into Weeks is: %d\n",week);
     getch();
}

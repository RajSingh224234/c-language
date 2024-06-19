#include<stdio.h>
#include<conio.h>
void main()
{
     float meter;
     printf("Enter The Your Value in Meter:");
     scanf("%f",&meter);
     float foot,inch;
     foot=(3.2*meter);
     inch=(39.37*meter);
     printf("Given Value is Converted into Foot is: %f\n",foot);
     printf("Given Value is Converted into Inches is: %f",inch);
     getch();
}

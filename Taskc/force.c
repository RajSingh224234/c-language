#include<stdio.h>
#include<conio.h>
void main()
{
     float mass,acceleration;
     printf("Enter The Value Of Mass:");
     scanf("%f",&mass);
     printf("Enter The Value Of Acceleration:");
     scanf("%f",&acceleration);
     float force=mass*acceleration;
     printf("Your Obtained Force Is:%f",force);
     getch();
}

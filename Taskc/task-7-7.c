#include<stdio.h>
#include<conio.h>
void main()
{
     float distance,petrol;
     printf("Enter The Distance Covered By Bike In Km: ");
     scanf("%f",&distance);
     printf("Enter The Quantity Of a Petrol Consumption In Litre: ");
     scanf("%f",&petrol);
     float bikeavg=distance/petrol;
     printf("The Current Average Of Your Bike Is:%fkm",bikeavg);
     getch();
}

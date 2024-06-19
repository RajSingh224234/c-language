#include<stdio.h>
#include<conio.h>
void main()
{
     float weight,height;
     printf("Enter Your Weight in Kg:");
     scanf("%f",&weight);
     printf("Enter Your Height in Meter:");
     scanf("%f",&height);
     float bmi=(weight)/(height*height);
     printf("Your Body Mass Index is:%f",bmi);
     getch();
}

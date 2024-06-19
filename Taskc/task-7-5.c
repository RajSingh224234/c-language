#include<stdio.h>
#include<conio.h>
void main()
{
     float num1,num2,num3,num4,num5,num6,num7,number;
     printf("Enter The First Number:");
     scanf("%f",&num1);
     printf("Enter The Second Number:");
     scanf("%f",&num2);
     printf("Enter The Third Number:");
     scanf("%f",&num3);
     printf("Enter The Fourth Number:");
     scanf("%f",&num4);
     printf("Enter The Fifth Number:");
     scanf("%f",&num5);
     printf("Enter The Sixth Number:");
     scanf("%f",&num6);
     printf("Enter The Seventh Number:");
     scanf("%f",&num7);
     printf("Enter The Numbers of Given Number:");
     scanf("%f",&number);
     float average;
     average=(num1+num2+num3+num4+num5+num6+num7)/number;
     printf("Average Of All Given Numbers is:%f",average);
     getch();
}

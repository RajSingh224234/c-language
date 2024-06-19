#include<stdio.h>
#include<conio.h>
void main()
{
     float radius;
     printf("Enter The radius Of a circle:");
     scanf("%f",&radius);
     float area,perimeter;
     area=(22*radius*radius)/7;
     perimeter=(2*22*radius)/7;
     printf("The Area Of a Given Circle is: %f\n",area);
     printf("The Perimeter Of a Given Circle is: %f",perimeter);
     getch();
}
     

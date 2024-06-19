#include<stdio.h>
#include<conio.h>
void main()
{
     float length,breadth;
     printf("Enter The Length Of a Rectangle:");
     scanf("%f",&length);
     printf("Enter The Breadth Of a Rectangle:");
     scanf("%f",&breadth);
     float area,perimeter;
     area=length*breadth;
     perimeter=2*(length+breadth);
     printf("The Area Of a Given Rectangle is: %f\n",area);
     printf("The Perimeter Of a Given Rectangle is: %f",perimeter);
     getch();
}
     

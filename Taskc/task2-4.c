#include<stdio.h>
#include<conio.h>
void main()
{
    float height,width;
    printf("Enter The Height Of Given Rectangle:");
    scanf("%f",&height);
    printf("Enter The width Of Given Rectangle:");
    scanf("%f",&width);
    float perimeter;
    perimeter=2*(height+width);
    printf("The Perimeter Of Given Rectangle Is:%f",perimeter);
    getch();
}

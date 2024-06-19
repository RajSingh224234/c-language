#include<stdio.h>
#include<conio.h>
void main()
{
    float radius;
    printf("Enter The Radius Of Sphere:");
    scanf("%f",&radius);
    float volume;
    volume=(4*22*radius*radius*radius)/21;
    printf("The Volume Of Sphere Is:%f",volume);
    getch();
}

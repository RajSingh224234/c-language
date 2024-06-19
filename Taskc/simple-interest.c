#include<stdio.h>
#include<conio.h>
void main()
{
     float rate,time,pamount;
     printf("Enter The Given Rate:");
     scanf("%f",&rate);
     printf("Enter The Given Time:");
     scanf("%f",&time);
     printf("Enter The Given Amount:");
     scanf("%f",&pamount);
     float si=(rate*time*pamount)/100;
     printf("Your Simple Interest is:%f",si);
     getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
     float pamount,rate,time;
     printf("Enter Your Principal Amount:");
     scanf("%f",&pamount);
     printf("Enter Your rate Of a Amount:");
     scanf("%f",&rate);
     printf("Enter Your time Of a Amount:");
     scanf("%f",&time);
     float si=(pamount*rate*time)/100;
     printf("The Simple Interest Of Your Amount According to Your Data:%f",si);
     getch();
}

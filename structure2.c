#include<stdio.h>
#include<conio.h>
struct Car{
       int price;
       char model;
       float average;
       };
       void main()
       {
        struct Car c1;
        c1.price=450000;
        c1.model='i';
        c1.average=22.5;
        printf("%d\n",c1.price);
        printf("%c\n",c1.model);
        printf("%.2f",c1.average);
        getch();
        }

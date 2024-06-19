#include<stdio.h>
#include<conio.h>
void main()
{
     int num,i=1,cube=1;
     printf("Enter Your Number:");
     scanf("%d",&num);
     while(i<=num){
                   cube=i*i*i;
                   i++;
                   }
     printf("Your Number Cube is:%d\n",cube);
     getch();
}

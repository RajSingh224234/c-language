#include<stdio.h>
#include<conio.h>
void main()
{
     int i=5;
     int a=i++ + ++i + i++;
     printf("%d,%d",i,a);
     getch();
}

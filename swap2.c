#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b;
     printf("Enter a:");
     scanf("%d",&a);
     printf("Enter b:");
     scanf("%d",&b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("Value Of a after swap is:%d\n",a);
     printf("Value Of b after swap is:%d\n",b);
     getch();
}

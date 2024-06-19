#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b,c;
     printf("Enter a:");
     scanf("%d",&a);
     printf("Enter b:");
     scanf("%d",&b);
     c=a;
     a=b;
     b=c;
     printf("Value Of a after swap is:%d\n",a);
     printf("Value Of b after swap is:%d\n",b);
     getch();
}

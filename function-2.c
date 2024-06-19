//2.no return type with parameter;
#include<stdio.h>
#include<conio.h>
void fun(int,int);
void main()
{    int a,b,c,d;
     printf("Enter your a value:");
     scanf("%d",&a);
     printf("Enter your b value:");
     scanf("%d",&b);
     fun(a,b);
     printf("Enter your c value:");
     scanf("%d",&c);
     printf("Enter your d value:");
     scanf("%d",&d);
     fun(c,d);
     getch();

}

     void fun(int a,int b)
    {
     int sum;
     sum=a+b;
     printf("sum of two numbers is:%d\n",sum);
    }
         

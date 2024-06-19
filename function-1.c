//1.no return type with no parameter;

#include<stdio.h>
#include<conio.h>
void fun();//function declaration;
void main()
{
     fun();//function calling;
     fun();//code reusability ;
     getch();
     
}
void fun()//function definition;
{
     int a,b,sum;
     printf("Enter the value of a:");
     scanf("%d",&a);
     printf("Enter the value of b:");
     scanf("%d",&b);
     sum=a+b;
     printf("Sum of both number is: %d\n",sum);     

}

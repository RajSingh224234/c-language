//pointers are the variable which can store the address
// and values of the another variable;
//syntax int *ptr or int* ptr; 

#include<stdio.h>
#include<conio.h>
void main()
{
     int a=10,b=20;
     int *ptr=&a;
     int *ptr2=&b;
     printf("%d\n",ptr);//address of variable a;
     printf("%d\n",ptr2);//address of variable b;
     printf("%d\n",a);//value of a;
     printf("%d\n",b);//value of b;
     printf("%d\n",&a);//address of a;
     printf("%d\n",&b);//address of b;
     printf("%d\n",&ptr);//address of ptr;
     printf("%d\n",&ptr2);//address of ptr2;
     printf("%d\n",*ptr);//value of variable a;
     printf("%d\n",*ptr2);//value of variable b;
     getch();
}
     

// Union --> it allocates only largest datatype space to all variables
// Syntax;


#include<stdio.h>
#include<conio.h>
union myunion{
      int a;
      float b;
      char ch;
      };
      void main()
      {
           union myunion var;
           var.a=10;
           printf("%d\n",var.a);
           var.b=100.50;
           var.ch='R';
           printf("%c\n%.2f",var.ch,var.b);
           getch();
      }

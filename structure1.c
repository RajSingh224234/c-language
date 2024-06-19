// Structure  : Structure is a hetrogeneous data types where we can store
// different different data types at one place , means we can declare 
// int,char,float,double in same structure.
// Syntax;

#include<stdio.h>
#include<conio.h>

struct myStructure{
       int age;   // data member
       char name;  //  data member
       };
void main()
{
     struct myStructure m1;
     m1.age=10;
     m1.name='G';
     printf("%d\n",m1.age);
     printf("%c",m1.name);
     getch();
}

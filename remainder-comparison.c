#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b;
     printf("Enter The Value Of a:");
     scanf("%d",&a);
     printf("Enter The Value Of b:");
     scanf("%d",&b);
     int rema,remb;
     rema=a%b;
     remb=b%a;
     printf("The Remainder Of a is:%d\n",rema);
     printf("The Remainder Of b is:%d\n",remb);
     if(rema>remb)
     {
               printf("Remainder Of a is Greater Than b\n");
     }
     else{
               printf("Remainder Of b is Greater Than a\n");
          }
         
     getch();
}      
     

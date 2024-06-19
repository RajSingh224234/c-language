//return type with no parameter;
#include<stdio.h>
#include<conio.h>
int mul();
void main()
{
     int i;
     i=mul();
     printf("your multiplication value is:%d\n",i);
     printf("%d",mul());//New mothod of printing functions; 
     getch();


}
     int mul()
     {
         int a,b,m;
         printf("Enter the value of a:");
         scanf("%d",&a);
         printf("Enter the value of b:");
         scanf("%d",&b);
         m=a*b;
         return m;
     }
 

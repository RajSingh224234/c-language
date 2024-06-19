#include<stdio.h>
#include<conio.h>
void main()
{
     int num,digit=1,newnum=0;
     printf("Enter your number:");
     scanf("%d",&num);
     while(num!=0)
     {
     digit=num%10;
     newnum+=(digit*digit*digit);
     num=num/10;
     }
     if(num==newnum)
     {
     printf("Number is a armstrong %d",newnum);
     }
     else
     {
     printf("Not Armstrong");
     }
     getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
     int num,digit=1,newnum=0,originalnum;
     printf("Enter your number:");
     scanf("%d",&num);
     int orgnum=num;
     while(num!=0)
     {
     digit=num%10;
     newnum+=(digit*digit*digit);
     num=num/10;
     }
     if(orgnum==newnum)
     {
     printf("Number is a armstrong %d",newnum);
     }
     else
     {
     printf("Not Armstrong:%d",orgnum);
     }
     getch();
}

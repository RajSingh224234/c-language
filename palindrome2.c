#include<stdio.h>
#include<conio.h>
void main()
{
     int num,rem,rev=0;
     printf("Enter Your Number:");
     scanf("%d",&num);
     int originalnum=num;
     while(num!=0){
                   rem=num%10;
                   rev=rem+rev*10;
                   num=num/10;
                   }
     if(originalnum==rev){
                          printf("The Given Number is Palindrome:%d",rev);
                          }
     printf("The Given Number reverse is:%d",rev);
     getch();
}

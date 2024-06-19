#include<stdio.h>
#include<conio.h>
void main()
{
     int num,i,flag=0;
     printf("Enter your number:");
     scanf("%d",&num);
     if(num==0 || num==1)
     {
     printf("%d number is prime number",num);
     }
     for(i=2;i<num;i++)
     {
     if(num%i==0)
     {
     printf("Number %d is not a prime number",num);
     flag=1;
     break;
     }
     }
     if(flag==0)
     {
     printf(" Number is %d prime number ",num);
     }
     getch();
}

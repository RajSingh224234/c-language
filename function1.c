#include<stdio.h>
#include<conio.h>
int main()
{
     oddeven();
     sum();
     getch();
}
     sum()
     {
     int a=10,b=15;
     int res=a+b;
     printf("%d",res);
     }
     
     oddeven()
     {
     int number;
     printf("Enter your Number:");
     scanf("%d",&number);
     number%2==0?printf("Number is even:%d\n",number):printf("Number is odd:%d\n",number);
     }

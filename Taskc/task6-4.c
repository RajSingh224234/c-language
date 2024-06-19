#include<stdio.h>
#include<conio.h>
void main()
{
     int number,i;
     printf("Enter Your Number:");
     scanf("%d",&number);
     for(i=1;i<=number;i++)
     {
        printf("Number is:%d and cube of the %d is :%d\n",i,i,i*i*i);
     }
    
     getch();
}

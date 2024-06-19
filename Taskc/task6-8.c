#include<stdio.h>
#include<conio.h>
void main()
{
     int num,i;
     printf("Enter Your Number:");
     scanf("%d",&num);
     for(i=1;i<=num;i++)
     {
       if(i%7==0 && i%10==7){
                  printf("%d\n",i);
                  }                  
      }
     getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
     int integer;
     printf("Enter Your Integer Number:");
     scanf("%d",&integer);
     if(integer>=0){
                    printf("Given Number is a Positive Integer");
                    }
     else{
          printf("Given Number is a Negative Integer");
          }
     getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
     int age;
     printf("Enter Your Age:");
     scanf("%d",&age);
     if(age>=18){
                printf("Congratulations You are Eligible For Casting Your Vote");
                }
     else{
          printf("Sorry You are Not Eligible For Vote");
          }
     getch();
}

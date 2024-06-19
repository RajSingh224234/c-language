#include<stdio.h>
#include<conio.h>
void main()
{
     int value;
     printf("Enter The Value:");
     scanf("%d",&value);
     switch(value){
                   case 1:
                        printf("Your Name is Raj Singh");
                   break;
                   case 2:
                        printf("You are reading in Techsima");
                   break;
                   default:
                           printf("Enter Correct Value");
                   break;
                   }
     getch();
}

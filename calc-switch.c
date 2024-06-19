#include<stdio.h>
#include<conio.h>
void main()
{
     char res;
     int number1,number2;
     printf("Enter Your Operator Name:");
     scanf("%c",&res);
     printf("Enter Your Number1:");
     scanf("%d",&number1);
     printf("Enter Your Number2:");
     scanf("%d",&number2);
     switch(res){
                 case '+':
                      printf("Addition:%d",number1+number2);
                      break;
                 case '-':
                      printf("Substraction:%d",number1-number2);
                      break;
                 case '*':
                       printf("Multiplication:%d",number1*number2);
                 case '/':
                       printf("Division:%d",number1/number2);
                 }
     getch();
}

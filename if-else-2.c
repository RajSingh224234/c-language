#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b,c;
     printf("Enter The Value Of a:");
     scanf("%d",&a);
     printf("Enter The Value Of b:");
     scanf("%d",&b);
     printf("Enter The Value Of c:");
     scanf("%d",&c);
     if(a<b && a<c){
            printf("a is a smaller number than all");
            }
     else if(b<a && b<c){
                 printf("b is a smaller number than all");
          }
     else{
          printf("c is a smaller number than all");
          }
     getch();
}

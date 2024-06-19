#include<stdio.h>
#include<conio.h>
void main()
{
     int i,j,k;
     for(i=1;i<=5;i++)
     {
     for(j=2;j<=5;j++)
     {
     if(i+j>=6){
                printf("*");
                }
     else{
          printf(" ");
          }
     }
     for(k=1;k<=i;k++)
     {
      printf("*");
     }
     printf("\n");
     }
     getch();
}

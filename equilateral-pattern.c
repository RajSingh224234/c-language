#include<stdio.h>
#include<conio.h>
void main()
{
     int i,j,space,row;
     printf("Enter the number of row:");
     scanf("%d",&row);
     for(i=1;i<=row;i++)
     {
     for(space=1;space<=(row-i);space++)
     {
     printf(" ");
     }
     for(j=1;j<=i;j++)
     {
     printf("* ");
     }
     printf("\n");
     }
     getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
     int row,i,j;
     printf("Enter the number of rows:");
     scanf("%d",&row);
     for(i=1;i<=row;i++)
     {
     for(j=row;j>=i;j--)
     {
     printf("* ");
     }
     printf("\n");
     }
     getch();
}

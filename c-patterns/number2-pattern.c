#include<stdio.h>
#include<conio.h>
void main()
{
     int row,a=1,i,j;
     printf("Enter the number of rows:");
     scanf("%d",&row);
     for(i=1;i<=row;i++)
     {
     for(j=1;j<=i;j++)
     {
     printf("%d ",a);
     a++;
     }
     printf("\n");
     }
     getch();
}

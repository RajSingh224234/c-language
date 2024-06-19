#include<stdio.h>
#include<stdio.h>
void main()
{
     int row,i,j;
     printf("Enter the Number of rows:");
     scanf("%d",&row);
     for(i=1;i<=row;i++)
     {
     for(j=1;j<=i;j++)
     {
     printf("* ");
     }
     printf("\n");
     }
     for(i=1;i<=row;i++)
     {
     for(j=row-1;j>=i;j--)
     {
     printf("* ");
     }
     printf("\n");
     }
     getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
     int i,j;
     for(i=1;i<=5;i++)
     {
     for(j=1;j<=5;j++)
     {
     if(i==1 && j<=5)
     {
     if(j==1)
     printf(" *");
     else if(j>=3)
     printf(" *");
     else
     printf("  ");
     }
     else if(i==2 && j<=3)
     {
     if(j==1)
     printf(" *");
     else if(j==3)
     printf(" *");
     else
     printf("  ");
     }
     else if(i==3 && j<=5)
     printf(" *");
     else if(i==4 && j<=5)
     {
     if(j==3)
     printf(" *");
     else if(j==5)
     printf(" *");
     else
     printf("  ");
     }
     else if(i==5 && j<=5)
     {
     if(j>=1 && j<=3)
     printf(" *");
     else if(j==5)
     printf(" *");
     else
     printf("  ");
     }
     else
     printf("  ");
     }
     printf("\n");
     }
     getch();
}

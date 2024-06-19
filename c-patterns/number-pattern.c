#include<stdio.h>
#include<conio.h>
void main()
{
     int m,n,i,j;
     printf("Enter The value of line:");
     scanf("%d",&m);
     printf("Enter The value of number of stars:");
     scanf("%d",&n);
     for(i=1;i<=m;i++){
                       for(j=1;j<=n;j++){
                                         printf("%d",j);
                                       }
                        printf("\n"); 
                       }
     getch();
}

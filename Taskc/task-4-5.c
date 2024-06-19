#include<stdio.h>
#include<conio.h>
void main()
{
     int m,n;
     printf("Enter The Value Of m:");
     scanf("%d",&m);
     if(m>0){
             n = 1;
             printf("Value Of n:%d",n);
             }
     else if(m==0){
              n = 0;
             printf("Value Of n:%d",n);
          }
     else{
             n = -1;
             printf("Value Of n:%d",n);
          }
     getch();
}

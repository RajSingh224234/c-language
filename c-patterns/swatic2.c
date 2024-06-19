#include<stdio.h>
#include<conio.h>
void main(){
     int i,j,mid,n=11;
     mid=n/2+1;
     for(i=1;i<=n;i++){
       for(j=1;j<=n;j++){
         if(j==mid||i==mid||(j==1&&i<=mid)||(i==1&&j>=mid)||(i==n&&j<=mid)||(j==n&&i>=mid))
         printf("*");
         else
         printf(" ");
         }
         printf("\n");
         }
         getch();
         }

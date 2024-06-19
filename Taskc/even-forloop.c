#include<stdio.h>
#include<conio.h>
void main()
{
     int m,n;
     printf("Enter The value of m:");
     scanf("%d",&m);
     for(n=1;n<=m;n++){
                       if(n%2==0){
                                  printf("%d\n",n);
                                  }
                       }
     getch();
}

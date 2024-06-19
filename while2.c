#include<stdio.h>
#include<conio.h>
void main()
{
     int num,i=1,sqr=1;
     printf("Enter Your Number:");
     scanf("%d",&num);
     while(i<=num){
                   sqr=i*i;
                   i++;
                   }
      printf("Your Number Square is:%d\n",sqr);
     getch();
}

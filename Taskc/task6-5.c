#include<stdio.h>
#include<conio.h>
void main()
{
     int sstart,numitem,i=1,commondiffer,ap=1,sum=0;
     printf("Enter Your Starting Series:");
     scanf("%d",&sstart);
     printf("Enter Your Number Of Items:");
     scanf("%d",&numitem);
      printf("Enter Your Common Difference:");
     scanf("%d",&commondiffer);
     do{
        sum=sum+ap;
        printf("%d\n",ap);
        ap=commondiffer+ap;
        i++;
       }
    while(i<=numitem);
    printf("Sum of all AP is:%d",sum);
     getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
     float increasepercent,price;
     printf("Enter Your Price:");
     scanf("%f",&price);
     printf("Enter Your increase percentage:");
     scanf("%f",&increasepercent);
     float disamount,newprice;
     disamount=(price*increasepercent)/100;
     newprice=price+disamount;
     printf("Discount Amount is:%f\n",disamount);
     printf("Your Revised New Price is:%f\n",newprice);
     getch();
}

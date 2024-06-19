#include<stdio.h>
#include<conio.h>
void main()
{
     float priceg,price1ac,price2ac,price3ac,priceslp;
     printf("Enter The Ticket Price of General Coach:");
     scanf("%f",&priceg);
     printf("Enter The Ticket Price of 1 Ac Coach:");
     scanf("%f",&price1ac);
     printf("Enter The Ticket Price of 2 Ac Coach:");
     scanf("%f",&price2ac);
     printf("Enter The Ticket Price of 3 Ac Coach:");
     scanf("%f",&price3ac);
     printf("Enter The Ticket Price of Slipper Coach:");
     scanf("%f",&priceslp);
     int nprg,npr1ac,npr2ac,npr3ac,nprslp;
     printf("Enter The Number Of Person Buys Ticket Of General Coach:");
     scanf("%d",&nprg);
     printf("Enter The Number Of Person Buys Ticket Of 1 Ac Coach:");
     scanf("%d",&npr1ac);
     printf("Enter The Number Of Person Buys Ticket Of 2 Ac Coach:");
     scanf("%d",&npr2ac);
     printf("Enter The Number Of Person Buys Ticket Of 3 Ac Coach:");
     scanf("%d",&npr3ac);
     printf("Enter The Number Of Person Buys Ticket Of Sliper Coach:");
     scanf("%d",&nprslp);
     float totalg,total1ac,total2ac,total3ac,totalslp;
     totalg=(priceg*nprg);
     total1ac=price1ac*npr1ac;
     total2ac=price2ac*npr2ac;
     total3ac=price3ac*npr3ac;
     totalslp=priceslp*nprslp;
     printf("Total Price For Genral Ticket is: %f\n",totalg);
     printf("Total Price For 1 Ac Ticket is: %f\n",total1ac);
     printf("Total Price For 2 Ac Ticket is: %f\n",total2ac);
     printf("Total Price For 3 Ac Ticket is: %f\n",total3ac);
     printf("Total Price For Sliper Ticket is: %f\n",totalslp);
     float total;
     total=totalg+total1ac+total2ac+total3ac+totalslp;
     printf("Total Money Spended By a Ticket Buyer is: %f",total);
     getch();
}
     
     

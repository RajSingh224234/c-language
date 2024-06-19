#include<stdio.h>
#include<conio.h>
void main()
{
     float pricesoap,priceshempoo,pricespices;
     printf("Enter The Price Of Soap:");
     scanf("%f",&pricesoap);
     printf("Enter The Price Of Shempoo:");
     scanf("%f",&priceshempoo);
     printf("Enter The Price Of Spices:");
     scanf("%f",&pricespices);
     float qsoap,qshempoo,qspices;
     printf("Enter The Quantity Of Soap:");
     scanf("%f",&qsoap);
     printf("Enter The Quantity Of Shempoo:");
     scanf("%f",&qshempoo);
     printf("Enter The Quantity Of Spices:");
     scanf("%f",&qspices);
     float tsoap,tshempoo,tspices;
     tsoap=pricesoap*qsoap;
     tshempoo=priceshempoo*qshempoo;
     tspices=pricespices*qspices;
     printf("The Total Price Of Soap is:%f\n",tsoap);
     printf("The Total Price Of Shempoo is:%f\n",tshempoo);
     printf("The Total Price Of Spices is:%f\n",tspices);
     //float grandtotal=tspices-tshempoo/tsoap*tspices+tsoap;
     float grand=0;
     grand=tspices+tshempoo+tsoap;
     //printf("The Total Money Spended On Daily Needs Is: %f\n",grandtotal);
     printf("Your Total Spended money is:%f\n",grand);
     float note10,note20,note50,note100,note200,note500,note1000;
     note10=grand/10;
     note20=grand/20;
     note50=grand/50;
     note100=grand/100;
     note200=grand/200;
     note500=grand/500;
     note1000=grand/1000;
     /*note10=grandtotal/10;
     note20=grandtotal/20;
     note50=grandtotal/50;
     note100=grandtotal/100;
     note200=grandtotal/200;
     note500=grandtotal/500;
     note1000=grandtotal/1000;*/
     printf("Total Note Of Rupees 10 Is: %f\n",note10);
     printf("Total Note Of Rupees 20 Is: %f\n",note20);
     printf("Total Note Of Rupees 50 Is: %f\n",note50);
     printf("Total Note Of Rupees 100 Is: %f\n",note100);
     printf("Total Note Of Rupees 200 Is: %f\n",note200);
     printf("Total Note Of Rupees 500 Is: %f\n",note500);
     printf("Total Note Of Rupees 1000 Is: %f\n",note1000);
     getch();
}

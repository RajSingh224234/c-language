#include<stdio.h>
#include<conio.h>
void main()
{
     float petrol,diesel,cng,petroldensity,dieseldensity,cngdensity;
     printf("Enter The Quantity Of Petrol:");
     scanf("%f",&petrol);
     printf("Enter The Quantity Of Diesel:");
     scanf("%f",&diesel);
     printf("Enter The Quantity Of Cng:");
     scanf("%f",&cng);
     printf("Enter The Density Of Petrol:");
     scanf("%f",&petroldensity);
     printf("Enter The Density Of Diesel:");
     scanf("%f",&dieseldensity);
      printf("Enter The Density Of Cng:");
     scanf("%f",&cngdensity);
     float petrolprice,dieselprice,cngprice;
     printf("Enter The Price Of Petrol:");
     scanf("%f",&petrolprice);
     printf("Enter The Price Of Diesel:");
     scanf("%f",&dieselprice);
     printf("Enter The Price Of Cng:");
     scanf("%f",&cngprice);
     float tpricepetrol,tpricediesel,tpricecng;
     tpricepetrol=petrol*petrolprice;
     tpricediesel=diesel*dieselprice;
     tpricecng=cng*cngprice;
     printf("Total Payable Amount For Petrol:%f\n",tpricepetrol);
     printf("Total Payable Amount For Diesel:%f\n",tpricediesel);
     printf("Total Payable Amount For Cng:%f\n",tpricecng);
     float totalfuel;
     totalfuel=tpricepetrol+tpricediesel+tpricecng;
     printf("Total Money Spended On Fuel:%f",totalfuel);
     getch();
}

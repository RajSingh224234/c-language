#include<stdio.h>
#include<conio.h>
void main()
{
     int farenheit,celcius;
     printf("Enter the Value in Farenheit:");
     scanf("%d",&farenheit);
     printf("Enter the Value in Celcius:");
     scanf("%d",&celcius);
     float celcs,faren;
     celcs=((farenheit-32)*5)/9;
     faren=(9*celcius)/5+(32);
     printf("Value Of Farenheit is Converted Into Celcius is: %f\n",celcs);
     printf("Value Of Celcius is Converted Into Farenheit is: %f\n",faren);
     getch();
}

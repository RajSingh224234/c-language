#include<stdio.h>
#include<conio.h>
void main()
{
     int physics;
     int gk;
     int maths;
     int urdu;
     int art;
     printf("Enter Your Obtained Marks in Physics:");
     scanf("%d",&physics);
     printf("Enter Your Obtained Marks in GK:");
     scanf("%d",&gk);
     printf("Enter Your Obtained Marks in Maths:");
     scanf("%d",&maths);
     printf("Enter Your Obtained Marks in Urdu:");
     scanf("%d",&urdu);
     printf("Enter Your Obtained Marks in Art:");
     scanf("%d",&art);
     int total;
     total=physics+gk+maths+urdu+art;
     printf("Your Total Obtained Marks Are %d\n",total);
     float percentage;
     percentage=(total*100)/500;
     printf("You Obtained Total Percentage is %f",percentage);
     getch();
}

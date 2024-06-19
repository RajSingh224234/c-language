#include<stdio.h>
#include<conio.h>
void main()
{
     int hindi;
     int maths;
     int english;
     int science;
     int sst;
     printf("enter your class Eleventh  hindi marks:");
     scanf("%d",&hindi);
     printf("enter your class Eleventh maths marks:");
     scanf("%d",&maths);
     printf("enter your class Eleventh maths marks:");
     scanf("%d",&english);
     printf("enter your class Eleventh maths marks:");
     scanf("%d",&science);
     printf("enter your class Eleventh maths marks:");
     scanf("%d",&sst);
     float avg=(hindi+maths+english+science+sst)/5;
     printf("your average of class Eleventh is: %f",avg);
     getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b,c;
     printf("Enter the First angle  of a Given Triangle:");
     scanf("%d",&a);
     printf("Enter the Second angle of a Given Triangle:");
     scanf("%d",&b);
     printf("Enter the Third angle of a Given Triangle:");
     scanf("%d",&c);
     int sum=a+b+c;
     printf("total Sum Of Given Angles:%d\n",sum);
     if(sum==180){
                    printf("Given Angles Can Form Triangle because their Angle Sum=180");
                    }
     else{
          printf("Given Angles Cannot Form Triangle because their Angle Sum!=180");
          }
     getch();
}

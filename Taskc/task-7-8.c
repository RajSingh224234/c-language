#include<stdio.h>
#include<conio.h>
void main()
{
     int x1,x2,y1,y2;
     printf("Enter The Value Of x1:");
     scanf("%d",&x1);
     printf("Enter The Value Of x2:");
     scanf("%d",&x2);
     printf("Enter The Value Of y1:");
     scanf("%d",&y1);
     printf("Enter The Value Of y2:");
     scanf("%d",&y2);
     float distance=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
     printf("Your Distance b/w Two Point is:%f",distance);
     getch();
}

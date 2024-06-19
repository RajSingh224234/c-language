#include<stdio.h>
#include<conio.h>
void main()
{
     int sec;
     printf("Enter Your Seconds:");
     scanf("%d",&sec);
     int hr,min,second,minutes;
     min=sec/60;
     minutes=min%60;
     hr=min/60;
     second=sec%60;
     printf("H:M:S:%d:%d:%d",hr,minutes,second);
     getch();
}

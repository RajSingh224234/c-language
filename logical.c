#include<stdio.h>
#include<conio.h>
void main()
{
     int a=5,b=10,c=3;
     int res1=(a>b)||(b<c);
     printf("The Value Of res1 Is:%d\n",res1);
     int res2=(a<b)&&(b>c);
     printf("The Value Of res2 Is:%d\n",res2);
     getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b;
     printf("Enter The Value Of a:");
     scanf("%d",&a);
     printf("Enter The Value Of b:");
     scanf("%d",&b);
     int placea,placeb;
     placea=a%10;
     placeb=b%10;
     printf("Once Value Of a is:%d\n",placea);
     printf("Once Value Of b is:%d\n",placeb);
     if(placea>placeb)
     {
                      printf("The Once Value Of a is Greater Than b\n");
     
     }
     else{
                      printf("The Once Value Of b is Greater Than a\n");
          }
     getch();
}      
     

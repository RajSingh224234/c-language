#include<stdio.h>
#include<conio.h>
void main()
{
     int amount;
     printf("Enter The Given Amount:");
     scanf("%d",&amount);
     int note1,note2,note5,note10,note20,note50,note100;
     note1=amount/1;
     note2=amount/2;
     note5=amount/5;
     note10=amount/10;
     note20=amount/20;
     note50=amount/50;
     note100=amount/100;
     printf("Number Of 1Rs Note:%d\n",note1);
     printf("Number Of 2Rs Note:%d\n",note2);
     printf("Number Of 5Rs Note:%d\n",note5);
     printf("Number Of 10Rs Note:%d\n",note10);
     printf("Number Of 20Rs Note:%d\n",note20);
     printf("Number Of 50Rs Note:%d\n",note50);
     printf("Number Of 100Rs Note:%d\n",note100);
     getch();
}

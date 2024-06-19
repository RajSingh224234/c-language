#include<stdio.h>
#include<conio.h>
void main()
{
     int n,i,sum=0;
     printf("Enter Your Number:");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
        printf("%d\n",i);
        sum+=i;
     }
     printf("Sum Of All Natural Number is:%d",sum);
     getch();
}

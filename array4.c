#include<stdio.h>
#include<conio.h>
void main()
{
     int n;
     printf("Enter the value of n:");
     scanf("%d",&n);
     int arr[n];
     int i;
     printf("Enter the value in array:");
     for(i=0;i<n;i++)
     {
     scanf("%d",&arr[i]);
     }
     int sum=0;
     for(i=0;i<n;i++)
     {
     sum=sum+arr[i];
     }
     printf("Total Sum of given numbers is:%d",sum);
     getch();
}

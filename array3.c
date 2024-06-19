#include<stdio.h>
#include<conio.h>
void main()
{
     int size;
     printf("Enter the size of array:");
     scanf("%d",&size);
     int arr1[size];
     int i;
     printf("Enter the values in array:");
     for(i=0;i<size;i++)
     {
     scanf("%d",&arr1[i]);
     }
     printf("Let's show the entered values in array:");
     for(i=0;i<size;i++)
     {
     printf("%d\t",arr1[i]);
     }
     getch();
}

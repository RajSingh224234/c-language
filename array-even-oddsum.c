#include<stdio.h>
#include<conio.h>
void main()
{
     int n,evensum=0,oddsum=0;
     printf("Enter the value of n:");
     scanf("%d",&n);
     int arr[n];
     int i;
     printf("Enter the elements of array:");
     for(i=0;i<n;i++)//intialize the array;
     {
     scanf("%d",&arr[i]);
     }
     for(i=0;i<n;i++)//traverse the array;
     {
     if(arr[i]%2==0)
     evensum+=arr[i];
     else
     oddsum+=arr[i];
     }
     printf("Sum of even numbers of array is %d\n",evensum);
     printf("Sum of add numbers of array is %d\n",oddsum);
     getch();
}
     

#include<stdio.h>
#include<conio.h>
void main()
{
     int num,i,sumeven=0,sumodd=0,difference;
     printf("Enter Your Number:");
     scanf("%d",&num);
     for(i=1;i<=num;i++)
     {
       if(i%2==0){
                  printf("even:%d\n",i);
                  sumeven+=i;
                  }  
       else{
              printf("odd:%d\n",i);
              sumodd+=i;
               }                
      }
      printf("sum of even number is=%d\n",sumeven);
      printf("sum of odd number is=%d\n",sumodd);
      difference=sumeven-sumodd;
      printf("Your Difference is:%d\n",difference);
     getch();
}

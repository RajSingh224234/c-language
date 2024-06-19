#include<stdio.h>
#include<conio.h>
void main()
{
     int month;
     printf("Enter The Number Of Month:");
     scanf("%d",&month);
     if(month==1){
                  printf("Month Have 31 Days");
                  }
     else if(month==2){
          printf("Month Have 28 Days");
          }
     else if(month==3){
          printf("Month Have 31 Days");
          }
     else if(month==4){
          printf("Month Have 30 Days");
          }
     else if(month==5){
          printf("Month Have 31Days");
          }
     else if(month==6){
          printf("Month Have 30 Days");
          }
     else if(month==7){
          printf("Month Have 31 Days");
          }
     else if(month==8){
           printf("Month Have 31 Days");
          }
     else if(month==9){
          printf("Month Have 30 Days");
          }
     else if(month==10){
          printf("Month Have 31 Days");
          }
     else if(month==11){
           printf("Month Have 31 Days");
          }
     else if(month==12){
           printf("Month Have 31 Days");
          }
     else{
          printf("Enter The Valid Month Number");
          }
     getch();
}

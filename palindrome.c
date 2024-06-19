 #include<stdio.h>
#include<conio.h>
void main()
{
     int num;
     int rem,rev=0;
     printf("Enter your Number:");
     scanf("%d",&num);
     int originalnum=num;
     //123 op--> 321
     while(num!=0)
     {
                  rem=num%10;
                  rev=rem+rev*10;
                  num=num/10;
                 }
      if(originalnum==rev){
                  printf("Number is Palindrome:%d\n",rev);
                  }
     printf("reverse value is :%d",rev);
     getch();
}
     

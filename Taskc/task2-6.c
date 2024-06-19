#include<stdio.h>
#include<conio.h>
void main()
{
    int ab,bc;
    printf("enter the Value Of a Angle Formed By a side ab of a triangle Is:");
    scanf("%d",&ab);
    printf("enter the Value Of a Angle Formed By a side bc of a triangle Is:");
    scanf("%d",&bc);
    int ca=180-(ab+bc);
    printf("The Value Of a Angle Formed By a side ca of a triangle Is:%d",ca);
    getch();
}

#include<stdio.h>
void main()
{
int h,b;
float AOT;
clrscr();
printf("\nEnter the value of base=");
scanf("%d",&b);
printf("\nEnter the value of height=");
scanf("%d",&h);
AOT= b*h*.5;
printf("\nArea of Right angle triangle=%f",AOT);
getch();
}
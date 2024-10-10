#include<stdio.h>
void main()
{
float Per,l,b;
clrscr();
printf("\nEnter the value of Length : ");
scanf("%f",&l);
printf("\nEnter the value of Breath : ");
scanf("%f",&b);
Per = 2*(l+b);
printf("Perimeter of Rectangle is :%f",Per);
getch();
}
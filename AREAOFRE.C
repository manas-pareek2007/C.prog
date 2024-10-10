#include<stdio.h>
void main()
{
float Area,l,b;
clrscr();
printf("\nEnter the value of Length :" );
scanf("%f",&l);
printf("Enter the value of Breath : ");
scanf("%f",&b);
Area = l*b;
printf("Area of Rectangle is :%f",Area);
getch();
}
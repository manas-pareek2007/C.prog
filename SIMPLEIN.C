#include<stdio.h>
void main()
{
float i,p,t,r;
r=7;
clrscr();
printf("\nEnter the principle amount:-");
scanf("%f",&p);
printf("\n Time for which amount is dposited:-");
scanf("%f",&t);
i=p*r*t/100;
printf("Total amount of simple intrest:-%f",i);
getch();
}
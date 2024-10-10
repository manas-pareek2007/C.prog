#include<stdio.h>
void main()
{
float a,f,c,FTC;
clrscr();
printf("Enter the temperature in Fahrenheit :");
scanf("%f",&f);
FTC = (f-32)*5/9;
printf("changed temperatue in celsius is =%f",FTC);
getch();
}
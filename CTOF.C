
#include<stdio.h>
void main()
{
float a,c,CTF;
clrscr();
printf("Enter the temperature in celsius :");
scanf("%f",&c);
CTF = c*9/5+32;
printf("Changed temperature in fahrenheit is :%f",CTF);
getch();
}
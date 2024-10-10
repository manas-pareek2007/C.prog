#include<stdio.h>
void main()
{
int a=7,b=12,c;
clrscr();
printf("\na is %d and b is %d",a,b);
c = a;
a = b;
b = c;
printf("\nNow a is %d and b is %d",a,b);
getch();
}

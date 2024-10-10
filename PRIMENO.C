#include<stdio.h>
#include<conio.h>
void main()
{

int i,n,count=0;
  clrscr();
 printf("\n enter a number-");
 scanf("%d",&n);

for(i=2;i<=n-1;i++)
{
   (n%i==0)?count++:"";
}
(count==0)?printf("%d number is prime", n):printf("%d number is not prime", n);
getch();
}
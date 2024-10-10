#include<stdio.h>
#include<stdio.h>
void main()
{
int i,n;
clrscr();
printf("enter the no. to get table =");
scanf("%d",&n);
printf("Table is =\n",n);
for(i=1;i<=10;i++)
{

printf("%d",i*n);
printf("\n");
}
getch();
}
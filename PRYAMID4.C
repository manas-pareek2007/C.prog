#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,n,no;
clrscr();
printf("Enter the value to get prymaid =\n ");
scanf("%d",&no);
n=no;
for(i=1;i<=no;i++)
{
    for(k=1;k<=n;k++)
    {
    printf(" ");
    }
    n--;
    for(j=1;j<=i;j++)
    {
    printf("*");
    }
    printf("\n");
    }
    getch();}

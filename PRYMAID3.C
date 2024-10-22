#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,s;
clrscr();
printf("enter the no. to print prymaid  ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
  for(j=1;j<=n-i;j++)
  {    printf(" ");  }

    for(s=1;s<=i;s++)
    {     printf("*");    }

    printf("\n");
  }
getch();
}

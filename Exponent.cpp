#include<stdio.h>
#include<conio.h>
int main()
{
	int result=1,base,power;
	printf("Enter the base = \n");
	scanf("%d",&base);
	printf("Enter the power of the base = \n");
	scanf("%d",&power);
	
	for(;power>0;power--)
	{
		result*=base;
	}
printf("Result of the exponent is  %d",result);
}

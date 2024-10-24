#include<stdio.h>
int main()
{
	int number,count=0;
	printf("Enter the number to count digit\n");
	scanf("%d",&number);
	while(number>0)
	{
		number=number/10;
		count++;
	}
	printf("digit of number is =%d",count);
	
}

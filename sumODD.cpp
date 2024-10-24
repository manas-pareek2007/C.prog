#include<stdio.h>
int main()
{
	int i,sum=0;
	printf("the odd numbers are \n");
	for(i=1;i<=50;i++)
	{
		printf("%d ",(2*i)-1);
		sum+=(2*i)-1;
	}
	printf("sum of odd numbers  %d \n",sum);
}

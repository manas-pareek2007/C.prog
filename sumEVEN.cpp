#include<stdio.h>
int main()
{
	int i,sum=0;
	printf("the even numbers are \n");
	for(i=1;i<=50;i++)
	{
		printf("%d ",2*i);
		sum+=2*i;
	}
	printf("sum of even numbers  %d \n",sum);
}

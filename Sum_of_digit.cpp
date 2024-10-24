#include<stdio.h>
main()
{
	int n,sum=0,r;
	printf("Enter the the number\n";)
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("sum of the digit is %d",sum);
}

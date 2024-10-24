#include<stdio.h>
#include<conio.h>
 int main()
{
	int i,f=1,n;
	
	printf("Enter the value to get the factorial=\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	 } 
	 printf("Factorial of %d = %d",n,f);
	 
}

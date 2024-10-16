#include<stdio.h>
main()
{
	int n,i,count = 0;
	printf(" enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		count++;
	}
	if(count == 2)
	printf(" given number is prime number: ");
	else
	printf(" given number is not prime number: ");
}

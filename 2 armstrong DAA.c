#include<stdio.h>
main()
{
	int n,rem,sum =0,temp;
	printf(" enter the value of n: ");
	scanf("%d",&n);
	temp = n;
	while(n>0)
	{
		rem = n%10;
		sum = sum+(rem*rem*rem);
		n = n/10;
	}
	if(sum == temp)
	{
		printf("given number is armstrong");
	}
	else
	{
		printf(" given number is not armstrong");
	}
}

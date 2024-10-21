#include<stdio.h>
main()
{
	int n,i,sum;
	printf("enter the value of n: ");
	scanf("%d",&n);
	sum = 0;
	i = 1;
	printf(" sum of %d to %d digits is",i,n);
	for(i=1;i<=n;i++)
	{
		sum = sum+i;
	}
	printf("\n %d",sum);
}

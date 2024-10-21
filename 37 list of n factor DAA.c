#include<stdio.h>
main()
{
	int i,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf(" factors of %d is : ",n);
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		printf("%d ",i);
	}
}

#include<stdio.h>
main()
{
	int n,i,p;
	printf("enter a number: ");
	scanf("%d",&n);
	p = 0;
	for(i=1;i<n;i++)
	{
		if(n%i == 0)
		{
			p = p+i;
		}
	}
	if(p == n)
	printf("%d is perfect number: ",n);
	else
	printf("%d is not perfect number : ",n);
}

#include<stdio.h>
main()
{
	int n,rem,rev,i;
	printf("enter the value : ");
	scanf("%d",&n);
	printf("\nreverse of given number %d is ",n);
	rev = 0;
	for(i=0;i<n;i++)
	{
		rem = n%10;
		rev = (rev*10)+rem;
		n = n/10;
	}
	printf(" %d",rev);
}

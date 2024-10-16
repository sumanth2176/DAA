#include<stdio.h>
main()
{
	int a,b,i,gcd;
	printf(" enter two numbers :");
	scanf("%d %d",&a,&b);
	while(a!=b)
	{
	if(a>b)
	 a = a-b;
	 else
	 b = b-a;
	}
	printf(" GCD of two numbers is %d",a);
}

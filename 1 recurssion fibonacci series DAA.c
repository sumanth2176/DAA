#include<stdio.h>
int fibonacci(int a, int b)
{
	int i, c;
	for(i=0;i<5;i++)
	{
		c = a+b;
		printf(" %d \t",c);
		a=b;
		b=c;
	}
}
main()
{
	int a = 0;
	int b = 1;
printf(" %d\t %d\t ",a,b);
fibonacci(a,b);
}

#include<stdio.h>
#define n 6
main()
{
	int a[n] = {2,3,500,4,1000,2};
	int max = 0,i;
	printf(" array is:");
		for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max = a[i];
	}
	
	printf("\n largest number in the array is:");
	printf(" %d ",max);
}

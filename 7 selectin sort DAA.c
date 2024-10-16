#include<stdio.h>
#define n 10
main()
{
	int a[n] = {0,9,8,7,6,-10,-1,3,2,1};
	int i,j,swap;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j ])
			{
				swap = a[i];
				a[i] = a[j];
				a[j] = swap;
			}
		}
	}
	printf("selection sort = ");
	for(i=0;i<n;i++)
	printf("%d \t",a[i]);
}

#include<stdio.h>
main()
{
	int i,a[100],n,high,low,mid,temp,j;
	printf("enter the array size: ");
	scanf("%d",&n);
	
	printf(" enter the elements into the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	low = 0;
	high = n-1;
	mid = (low+high)/2;
	for(i=0;i<=mid;i++)
	{
		for(j=i+1;j<=mid;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\n half merge sorted list is: ");
	for(i=0;i<=mid;i++)
	printf("%d ",a[i]);
	
		i = mid;
		high = n-1;
		mid = (i+high)/2;
	for(i = mid;i<=high;i++)
	{
		for(j=i+1;j<=high;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\n half merge sorted list is: ");
	for(i=mid;i<=high;i++)
	printf("%d ",a[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\n merge sort is: ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
	return 0;
}

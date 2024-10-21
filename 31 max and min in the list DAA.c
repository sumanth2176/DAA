#include<stdio.h>
main()
{
	int a[100],i,max,min,n;
	printf(" enter the size of an array: ");
	scanf("%d",&n);
	
	printf(" enter the elements into the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	max= 0;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	}
  
	min = a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min = a[i];
		}
	}
  
	printf("\n %d is the maximum number in the list: ",max);
	printf("\n %d is the minimum number in the list: ",min);
}

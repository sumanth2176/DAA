#include<stdio.h>
main()
{
	int a[100],low,high,mid;
	int n,i, key,found;
	printf("enter the size of an array: ");
	scanf("%d",&n);
	printf("\nenter the elements of an array: ");
		for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter a search key:");
	scanf("%d",&key);
		low = 0;
	high = n-1;

	while(low<=high)
	{
		mid = (low+high)/2;
		if(key<a[mid])
		{
		high = mid-1;
	    }
	    else if(key>a[mid])
	    {
	    	low = mid+1;
		}
		else if(key == a[mid])
		{
			printf("\n key = %d found at location %d",key,mid+1);
			found = 1;
			break;
		}
    }
}

#include<Stdio.h>
main()
{
	int a[100],n,i,j,temp;
	printf("enter the size of an array: ");
	scanf("%d",&n);
	printf(" enter the elements into the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
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
		printf("bubble sort of elemets: ");
		for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}

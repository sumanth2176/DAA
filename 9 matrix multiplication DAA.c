#include<stdio.h>
#define N 100
main()
{
	int a[N][N],b[N][N],c[N][N];
	int i,j,k,m,n,p,q,sum = 0;
	printf("enter number rows and columns of first matrix: \n");
	scanf("%d %d",&m,&n);
	printf("\nenter elements of first matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nenter number rows and columns of second matrix: \n");
	scanf("%d %d",&p,&q);
	printf("\nenter elements of second matrix:");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nfirst matrix is: \n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nsecond matrix is: \n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t ",b[i][j]);
		}
		printf("\n");
	}
    printf("\n matrix multiplication is:");
    if(n!=p)
    {
    	printf("matrix multiplication is not possible:");
	}
	else
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			sum = 0;
			for(k=1;k<m;k++)
			{
				sum = sum+a[i][k]*b[k][j];
				{
					c[i][j] = sum;
				}
			}
		}
	}
	printf("\nmatrix is:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%d\t",c[i][j]);
			}
printf("\n");
}
return 0;
}

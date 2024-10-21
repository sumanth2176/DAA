#include<stdio.h>
int main()
{
	int a[100],i,n,x;
    printf("\n enter array size :");
    scanf("%d",&n);
    printf("\n enter element into the array: ");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("\n enter the element;");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
	if(a[i]==x)
	{
		printf("%d founded at the position %d",x,i+1);
		break;
	}
   }
    if(a[i]!=x)
    {
    	printf("\n %d is not founded in the list:",x);
	}
	return 0;
}

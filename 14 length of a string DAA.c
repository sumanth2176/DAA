#include<stdio.h>
#include<string.h>
main()
{
	int count = 0,i= 0;
	char name[30];
	printf("enter a name: ");
	gets(name);
	while(name[i]!= '\0')
	{
		count++;
		i++;
	}
	printf("%d",count);
}

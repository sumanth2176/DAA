#include<stdio.h>
#include<string.h>
main()
{
	char s[100];
	int n,k;
	printf("enter the string: ");
scanf("%s",s);
	k = strlen(s)-1;
	n = 0;
	while(n<k)
	{
		if(s[n++]!= s[k--])
		{
			printf(" %s is not a palindrome: ",s);
			return 0;
		}
	}
		printf("%s is palindrome: ",s);
}

#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char a[20];
	int j=1,i;
	printf("Enter the identifier to check : ");
	scanf("%s",a);
	
	int len=strlen(a);
	
	if(isalpha(a[0]) || a[0]=='_')
	{
		for(i=1;i<len;++i)
		{
			if(isalpha(a[i]) || a[i]=='_' || isdigit(a[i]))
				j++;
		}
		if(j==len)
		printf("It is an Identifier");
	}
		
	if(j!=len)
		printf("NOt an Identifier");
	
	
return 0;
}
	
	

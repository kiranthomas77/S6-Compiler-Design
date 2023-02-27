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
	
	printf("\nState  :Q0");
	
	if(isalpha(a[0]) || a[0]=='_')
	{
		printf("\nState  :Q1");  //1st char verified
		for(i=1;i<len;++i)
		{
			if(isalpha(a[i]) || a[i]=='_' || isdigit(a[i]))
			{
				printf("\nState  :Q2");  //when each character is verified
				j++;
			}
		}
		if(j==len)
		{
		printf("\nFinal State");
		printf("\nIt is an Identifier");
		}
	}
		
	if(j!=len)
		printf("\nNOt an Identifier");
	
	
return 0;
}

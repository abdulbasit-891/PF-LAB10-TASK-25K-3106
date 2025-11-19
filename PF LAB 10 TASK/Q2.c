#include <stdio.h>
#include <string.h>
int main()
{
	int i,length,hasat=0,num;
	char email[50],domain[50];
	printf("Enter the Email:");
	scanf("%s",email);
	length=strlen(email);
	for(i=0;i<length;i++)
	{
		if(email[i]=='@')
		{
			hasat=1;
			num=i+1;
			break;
		}
	}
	if(hasat)
	{
		strcpy(domain,email+num);
	}
	else
	{
		strcpy(domain,"Invalid email");
	}
	printf("Domain: %s",domain);
}

#include <stdio.h>
#include <string.h>
int main()
{
	int i,length,uppercase=0,hasdigit=0,hasspecial=0;
	char password[50];
	printf("Enter the password:");
	scanf("%s",password);
	length=strlen(password);
	if(length<8)
	{
		printf("Password should be at least 8 characters long");
		return 0;
	}
	for(i=0;i<length;i++)
	{
		if(password[i]>='A'&&password[i]<='Z')
		{
			uppercase=1;
		}
		else
		if(password[i]>='0'&&password[i]<='9')
		{
			hasdigit=1;
		}
		else
		if(password[i] == '!' || password[i] == '@' ||password[i] == '#' || password[i] == '$' ||password[i] == '%')
		{
			hasspecial=1;
		}
	}
	if(uppercase&&hasdigit&&hasspecial)
	{
		printf("Strong password.\n");
	}
	else
	if(uppercase==0)
	{
		printf("Weak password\n");
		printf("The password does not contain any uppercase letter");
	}
	else
	if(hasdigit==0)
	{
		printf("Weak password\n");
		printf("The password does not contain any digit");
	}
	else
	if(hasspecial==0)
	{
		printf("Weak password\n");
		printf("The password does not contain any special character");
	}
	return 0;
}

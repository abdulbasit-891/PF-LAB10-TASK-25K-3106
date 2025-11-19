#include <stdio.h>
#include <string.h>
int main()
{
	char sentence[50];
	int i,length,digit=0,vowel=0,consonant=0,space=0;
	printf("Enter text: ");
    fgets(sentence, sizeof(sentence), stdin);
	length=strlen(sentence);
	for(i=0;i<length;i++)
	{
		if(sentence[i]=='a'||sentence[i]=='e'||sentence[i]=='i'||sentence[i]=='o'||sentence[i]=='u'||sentence[i]=='A'||sentence[i]=='E'||sentence[i]=='I'||sentence[i]=='O'||sentence[i]=='U')
		{
			vowel++;
		}
		else
		if( (sentence[i]>='a' && sentence[i]<='z') || (sentence[i]>='A' && sentence[i]<='Z'))
		{
			consonant++;
		}
		else
		if(sentence[i]>='0'&&sentence[i]<='9')
		{
			digit++;
		}
		else
		if(sentence[i]==' ')
		{
			space++;
		}
	}
	printf("\nStatistics\n");
	printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonant);
    printf("Digits: %d\n", digit);
    printf("Spaces: %d\n", space);
    printf("Total characters: %d\n", length);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    char original[50], encrypted[50];
    int i, length;

    printf("Enter text: ");
    fgets(original, sizeof(original), stdin);

    length = strlen(original);

    for(i = 0; i < length; i++)
    {
        char ch = original[i];
        if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 3;
            if(ch > 'Z')
                ch = ch - 26;
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            ch = ch + 3;
            if(ch > 'z')
                ch = ch - 26;
        }
        encrypted[i] = ch;
    }
    encrypted[length] = '\0';
    printf("\nOriginal:  %s", original);
    printf("Encrypted: %s\n", encrypted);
    printf("Decrypted: %s\n", original);

    return 0;
}


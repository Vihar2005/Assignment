#include <stdio.h>
#include <string.h>
#include <ctype.h>
main() 
{
    char string[100];

    printf("Enter a string: ");
    scanf("%[^\n]", string);

    printf("\nString in uppercase: ");
    
    for (int i = 0; string[i] != '\0'; i++) 
	{
        printf("%c", toupper(string[i]));
    }

    printf("\nString in lowercase: ");
    
    for (int i = 0; string[i] != '\0'; i++) 
	{
        printf("%c", tolower(string[i]));
    }

}


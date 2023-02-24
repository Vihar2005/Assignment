#include <stdio.h>

void string_copy(char source[], char destination[]) 
{
    int i = 0;
    while (source[i] != '\0') 
	{
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

int main() 
{
    char source[100], destination[100];
    
    printf("Enter the string to be copied: ");
    scanf("%s", source);
    
    string_copy(source, destination);
    
    printf("Copied string: %s\n", destination);
}


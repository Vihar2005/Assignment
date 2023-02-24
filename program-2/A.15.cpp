#include <stdio.h>

int string_length(char s[]) 
{
    int i = 0;
    while (s[i] != '\0') 
	{
        i++;
    }
}

void reverse_string(char s[]) 
{
    int length = string_length(s);
    
    int i, j;
    
    for (i = 0, j = length-1; i < j; i++, j--) 
	{
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int check_palindrome(char s[]) 
{
    int length = string_length(s);
    
    int i, j;
    
    for (i = 0, j = length-1; i < j; i++, j--) 
	{
        if (s[i] != s[j]) 
    }
}

int main() 
{
    char s[100];
    
    printf("Enter a string: ");
    scanf("%s", s);
    
    reverse_string(s);
    
    printf("Reversed string: %s\n", s);
    
    if (check_palindrome(s)) 
	{
        printf("The string is a palindrome.\n");
    }
    else 
	{
        printf("The string is not a palindrome.\n");
    }
}


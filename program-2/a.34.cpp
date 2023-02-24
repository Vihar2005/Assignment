#include <stdio.h>

int main() 
{
    FILE *fp;
    char filename[100], ch;

    printf("Enter the filename to open for reading: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) 
	{
        printf("Error opening the file.\n");
        return 1;
    }

    printf("The contents of the file are: \n");
    while ((ch = fgetc(fp)) != EOF) 
	{ 
	        printf("%c", ch);
    }

    fclose(fp); 
}


#include<stdio.h>
main()
{
	char name[25];
	int length;
	
	printf("enter string : ");
	gets(name);
	
	length=strlen(name);
	
	printf("total length of the string is : %d",length);
	
}

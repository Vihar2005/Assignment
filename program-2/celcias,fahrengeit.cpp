#include<stdio.h>
main()
{
	float fahrenheit,celcias;
	
	printf("enter value of celcias : ");
	scanf("%f",&celcias);
	
	fahrenheit = (celcias *9/5)+32;
	
	printf("%2f celcias = %2f fahrengeit",celcias, fahrenheit);
	
}

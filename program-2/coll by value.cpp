#include<stdio.h>
void swap(int a,int b);
main()
{
	int a=10,b=20;
	
	printf("before swapping value of a=%d b=%d",a,b);
	
	swap(a,b);
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	
	printf("\n After swaping value of a=%d b=%d",a,b);
}

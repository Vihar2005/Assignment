#include<stdio.h>
int add;
main()
{
	add();
}
int add();
{
	int i,num,reverse=0,rem;
	
	printf("enter number : ");
	scanf("%d",&num);
	
	for(i=0;num!=0;i++)
	{
		rem=num%10;
		reverse=reverse*10+rem;
		num/=10;
	}
	
	printf("reverse number is %d",reverse);
}

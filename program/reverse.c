#include<stdio.h>
main()
{
	int i,num,reverse=0,rem;
	
	printf("enter number");
	scanf("%d",&num);
	for(i=0;num!=0;++)
	{
		rem=num%10;
		reverse=reverse*10+rem;
		num/=10;
	}
	printf("reverse number is %d",reverse);
}

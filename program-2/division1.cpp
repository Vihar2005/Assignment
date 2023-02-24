#include<stdio.h>
void add();
main()
{
	add();
}
void add()
{
	int a,b,ans;
	
	printf("enter value of a : ");
	scanf("%d",&a);
	
	printf("enter value of b : ");
	scanf("%d",&b);
	
	ans=a/b;
	
	printf("ans=%d",ans);
}


#include<stdio.h>
int i,a,ans;
void squre();
void cube();
main()
{
	squre();
	cube();
}
void squre()
{
	/*int i,a,ans;*/
	
	printf("\nenter value of i : ");
	scanf("%d",&i);
	
	printf("\nenter value of a : ");
	scanf("%d",&a);
	
	ans=i*a;
	
	printf("%d",ans);
}

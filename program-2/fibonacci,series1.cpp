#include<stdio.h>
void fibonacci series();
main()
{
	fibonacci series();
}
void fibonacci series()
{
	int i,n,t1=0,t2=1,t3;
	
	t3=t1+t2;
	
	printf("enter number of terns : ");
	scanf("%d",&n);
	
	printf("fibonacci series is : %d %d",t1,t2);
	
	for(i=3;i<=n;++i)
	
	{
		printf("%d",t3);
		t1=t2;
		t2=t3;
		t3=t1+t2
	}
       
}

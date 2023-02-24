#include<stdio.h>
main()
{
	int a[10],i,j,temp=0;//{14,15,89}
	
	for(i=0;i<=10;i++)
	{
		printf("enter array elements : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=10;i++)//a[i]=14
	{
		for(j=i+1;j<=10;j++)//a[i]=14
		{
			if(a[i]<a[j])//14>15
			{
				temp=a[i];//temp=14
				a[i]=a[j];//a[i]=15
				a[j]=temp;
			}
		}
	}
	printf("acending order : ");
	for(i=0;i<=10;i++)
	{
		printf("\n%d",a[i]);
	}
}

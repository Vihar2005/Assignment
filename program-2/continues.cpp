#include<stdio.h>
main()
{
	int i;
	for(i=1;i<=11;++i)
	{
		if((i=4)||(i==7))
		{
			continue;
		}
		printf("value of i is : %d\n",i);
		
	}
}

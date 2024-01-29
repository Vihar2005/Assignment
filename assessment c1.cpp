#include<stdio.h>
main()
{
	int n,quantity,amount,price,totalamount=0;
	char addAnother;
	
	do
	{
		printf("\n\n-----------MENU-----------\n");
		printf("1. pizza      price=180rs/pcs\n");
		printf("2. burger     price=100rs/pcs\n");
		printf("3. dosa       price=120rs/pcs\n");
		printf("4. idli       price=50rs/pcs\n");
		printf("\nPlease enter your choose... : ");
		scanf("%d",&n);
		
		switch(n)
		{
			case 1:
			printf("\nYou have choosen pizza");
			printf("\nEnter the quantity: ");
			scanf("%d",&quantity);
			price= 180;
			break;
			
			case 2:
			printf("\nYou have choosen burger");
			printf("\nEnter the quantity : ");
			scanf("%d",&quantity);
			price= 100;
			break;
			
			case 3:
			printf("\nYou have choosen dosa");
			printf("\nEnter the quantity : ");
			scanf("%d",&quantity);
			price= 120;
			break;
			
			case 4:
			printf("\nYou have choosen idli");
			printf("\nEnter the quantity : ");
			scanf("%d",&quantity);
			price= 50;
			break;
			
			default:
			printf("\nYou have choosen wrong number ");
			
		}
		amount= price*quantity;
		printf("\nTotal Amount :%d",TotalAmount);
		
		printf("\nDo you want place more orders? Y & N:");
		
		addAnother= getch();
		
	}while(addAnother == 'y'|| addAnother =='Y');
}

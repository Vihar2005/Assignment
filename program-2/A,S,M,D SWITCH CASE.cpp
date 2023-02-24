#include<stdio.h>
main()
{
	int op;
	
	printf("ENTER A OPERATOR");
	scanf("%c",&op);
	
	switch(op)
	{
		case '+':
			printf("ADDITION");
			break;
			
			case '-':
				printf("SUBSTRACTION");
				break;
				
				case '*':
					printf("MULTIPLICATION");
					break;
					
					case '/':
						printf("DIVISION");
						break;
						
						default:
							printf("SOMETHING IS WRONG");
	}
}

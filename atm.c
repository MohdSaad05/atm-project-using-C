#include <stdio.h>
 
unsigned long amount=1000, deposit, withdraw;
int choice, pin=0, k;

 
int main()
{
	while (pin != 1234)
	{
		printf("ENTER YOUR SECRET PIN NUMBER: ");
		scanf("%d", &pin);
		if (pin != 1234)
		printf("PLEASE ENTER VALID PASSWORD \n");
	}
	do
	{
		printf("********Welcome to ATM Service**************\n");
		printf("1. Check Balance\n");
		printf("2. Withdraw Cash\n");
		printf("3. deposite cash\n");
		printf("4. Quit\n");
		printf("******************?**************************?*\n\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\n YOUR BALANCE IN Rs : %lu ", amount);
			break;
		case 2:
			printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
			scanf("%lu", &withdraw);
		
			if (withdraw >(amount - 500))
			{
				printf("\n INSUFFICENT BALANCE ");
			}
			else
			{
				amount = amount - withdraw;
				printf("\n\n PLEASE COLLECT CASH ");
				printf("\n YOUR CURRENT BALANCE IS %lu", amount);
			}
			break;
		case 3:
			printf("\n ENTER THE AMOUNT TO DEPOSIT ");
			scanf("%lu", &deposit);
                        amount = amount + deposit;
			printf("YOUR BALANCE IS %lu", amount);
			break;
		case 4:
			printf("\n THANK U  FOR USING ATM ");
			break;
		default:
			printf("\n INVALID CHOICE ");
		}
		k=1;
	} while (!k);
	printf("\n\n THANK YOU FOR USING OUR ATM SERVICE ");
	return 0;
}
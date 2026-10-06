//program that allows the user to withdraw as long as account balance is greater than 0
//AURTHOR: MAXWELL KABARI
//ADMN: BCS-05-0073/2026

#include <stdio.h>

int main()
{
	float account_balance,withdrawn_amount;
	
	account_balance = 250;
	
	
	
	while(account_balance > 0)
	{
        printf("Enter amount to withdraw: \n");
       	scanf("%f",&withdrawn_amount);
	
		
		
		if (withdrawn_amount <= account_balance){
			
			account_balance = account_balance - withdrawn_amount;	
			printf("Amount withdrawn: %.2f\n", withdrawn_amount);
			printf("Remaining balance: %.2f\n", account_balance);
				
		}
		else
		{
			printf("Insufficient funds%\n");
		}
		
		
	}
	
	return 0;
}


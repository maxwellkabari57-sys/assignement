//a loan application sytem that automatically approves loan allocation
// if the applicant qualifies
//AURTHOR:MAXWELL KABARI
//ADMN: BCS-05-0073/2026


#include <stdio.h>

int main()
{
	int age;
	float income;
	
	printf("Enter your age:\n");
	scanf("%d",&age);
	printf("Enter your monthly income:\n");
	scanf("%f",&income);
	
	
	if(age >= 21 &&income >= 21000){
		printf("congratulations you qualify for a loan");
		
	}
	else
	{
		printf("Unfortunately, we are unable to offer you a loan at this time ");
	}
	return 0;
}
//A bank will offer a customer a loan if they are 21 years or over and have an annual 
//''income of at least Sh21,000.
 //The customers age and income are input in response to user friendly prompts. 
 //Create a C program to implement the above requirements.   	
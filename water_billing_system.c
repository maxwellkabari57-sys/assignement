//Water billing system
//AUTHOR:MAXWELL KABARI
//ADMN:BCS-05-0073/2026
//DESCRIPTION: a simple water billing system

#include <stdio.h>
int main()
{
	float units_consumed,total_bill;
	
	printf("Enter amount of units consumed:\t");
	scanf("%f",&units_consumed);
	
	
	if (units_consumed<=30){
		total_bill = units_consumed * 20 ; 
		printf("");		
	}
	else if (units_consumed<=60){
		total_bill = units_consumed * 25 ;
		
	}
	
	else {
		total_bill = units_consumed * 30 ;
	}
	
	
	printf("total bill = %.2fKES \t", total_bill);
	
	return 0;
}












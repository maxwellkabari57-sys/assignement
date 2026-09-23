//library fine calculation
//Author: Maxwell Kabari
//ADMN:BCS-05-0073/2026

#include <stdio.h>
int main()
{
	int book_id,due_date,return_date;
	
//get user inputs
	
	printf("Enter book id:");
	scanf("%d",&book_id);
	
	printf("Enter due date:\n");
	scanf("%d",&due_date);
	
	printf("Enter return date:\n");
	scanf("%d",&return_date);
 
    int days_overdue,fine_rate,fine_amount;
    
    days_overdue = return_date - due_date;
     
     if(days_overdue<=0){
     	
     	days_overdue=0;
     	fine_rate=0;
     	fine_amount=0;
		 
	 }
	 
	 else if(days_overdue<=7){
		 fine_rate=20;
		 fine_amount=days_overdue * fine_rate;
	 }
    
     else if(days_overdue<=14){
		 fine_rate = 50;
		 fine_amount = days_overdue * fine_rate;
	 }
    
     else{
     	fine_rate = 100;
     	fine_amount = days_overdue * fine_rate;
     	
	 }
	 
	 printf("\n<<<<Fine details>>>>>\n");
	 printf("book id: %d\n",book_id);
	 printf("due date:%d\n",due_date);
	 printf("return date: %d\n",return_date);
	 printf("days overdue: %d\n",days_overdue);
	 printf("fine rate:%d\n",fine_rate);
	 printf("fine amount: %d\n",fine_amount);
		
	return 0;
}
// A program that checks if a student is eligible for final exams
//Author: MAXWELL KABARI
//ADMN: BCS-05-0073/2026
//DATE: 9/26/2026
/*DESCRIPTION: it is a simple program to check if a student is eligible for
 the final exam*/
 
 #include <stdio.h>
 int main()
 {
 	float attendance_rate,marks;
 	 
 	
 	printf("Enter attendance rate:\t");
 	scanf("%f",&attendance_rate);
 	
 	printf("Enter marks attained:\t");
 	scanf("%f",&marks);
 	
 	if(attendance_rate>=75 &&marks>=40){
		printf("Eligible for exams"); 
	 }
	 
    else
	 {
	 	printf("Not eligible\t");
		 
	 }
	 
	 return 0;
 }
 
 
 

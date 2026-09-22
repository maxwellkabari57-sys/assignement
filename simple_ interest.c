//a program for calculating simple inerest
//Author:maxwell kabari
//admn: BCS-05-00073/2026


#include<stdio.h>

int main(){
	
	float rate,time,principal,simpleinterest;
	
	printf("Enter principle: \n"); // principal amount %f
	scanf("%f",&principal);
	
	printf("Enter rate: \n"); //rate %f
	scanf("%f",&rate);
	
	printf("Enter time(in year): \n"); //time %f
	scanf("%f",&time);
	
	simpleinterest= (principal*time*rate)/100.0 ;
	
	printf("simple interest = %.2f\n" , simpleinterest);
	
	
	
	
	
	return 0;
}

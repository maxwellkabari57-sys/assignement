// prompting user to enter detals
//Author: Maxwell Kabari
//Admission number: BCS-05-0073/2026

#include<stdio.h>

int main()
{
	int height,phonenumber;
	float bankbalance;
	
	
	printf("Enter your height(in centimeters): "); //%d
	scanf("%d",&height);
	
	printf("Enter your bank balance:");//%f
	scanf("%.3f",&bankbalance);
	
	printf("Enter your phone number:");//%d
	scanf("%d",&phonenumber);
	
	return 0;
}
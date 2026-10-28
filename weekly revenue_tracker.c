//program to calculate total weekly revenue and the average revenue
//AURTHOR: MAXWELL KABARI
//ADMN: BCS-05-0073/2026
//UNIT: STRUCTURED PROGRAMMING
//UNIT CODE: BSD 111 

#include <stdio.h>

int main(int argc, char** argv)
{
	float revenue[7],total=0,average;
	int i;
	
	for (i=0; i<7; i++){
		printf("Enter revenue for day%d:", i + 1);
		scanf("%f",&revenue[i]);
		
		total = total + revenue[i];
	}
	average = total/7 ;
	printf("\nTOTAL REVENUE IS\t=%.2f\n",total);
	printf("TOTAL AVERAGE IS\t=%.2f\n",average);
	
	
	return 0;
}
//program to calculate surface area and volume
//Author:Maxwell Kabari
//admn:BCS-05-0073/2026

#include <stdio.h>

int main()
{
	const float pi=3.142;
	float surfacearea,radius,height,volume;
	
	
	printf("Enter the radius of the cylinder:\n"); //%d
	scanf("%f",&radius);
	
	printf("Enter the height of the cylinder:\n");//%d
	scanf("%f",&height);
	
	surfacearea= (2 * pi * radius * height) + (2 * pi * radius * radius);
	
	volume = (pi * radius * radius * height);
	
	printf("The surface area of the cylinder is  %f\n",surfacearea);
	
	printf("The volume of the cylinder is:%f",volume);

	return 0;
}
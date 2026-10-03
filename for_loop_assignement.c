//program to display from 100 to 50 in descending order
#include <stdio.h>
int main()
{
	int i,sum=0;
	
	for(i=100; i>=50;i--){
		
	printf("%d \n",i);	
    sum = sum + i;
		
	}
	printf("the sum is %d",&sum);
	
	return 0;
}
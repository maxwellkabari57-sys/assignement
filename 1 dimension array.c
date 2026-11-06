 
/*1D Array - Weekly Revenue Tracker 
The hotel records its total revenue for each day of the week (7 days). 
1.	Use a 1D array revenue[7] to store the daily revenues. 
2.	Input the revenue for each day. 
3.	Calculate and display: 
o	The total weekly revenue. 
o	The average daily revenue.
*/ 


#include <stdio.h>

int main(int argc, char** argv)
{
	int revenue[7];
	int i,amount,total,average;
	
	for(i=0;i<7;i++)
	{
		printf("Enter revenue%d:\n",i+1);
        scanf("%d",&amount);
        revenue[i] = amount;	
    }
    total = 0;
    for(i=0;i<7;i++)
	{
	total = total + revenue[i];
	average = total/7;
	}
	printf("\n");
	printf("Total weekly revenue is:%d\n",total);
    printf("The average daily revenue is:%d",average);
		
	return 0;
}
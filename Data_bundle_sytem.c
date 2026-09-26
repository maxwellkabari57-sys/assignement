//DATA BUNDLE PURCHASE SYSTEM
//AURTHOR:MAXWELL KABARI
//ADMN: BCS-05-0073/2026
/*DESCRIPTION: a system that calculates the amount to pay in order to 
purchase data bundles*/

#include <stdio.h>
int main()
{
	int choice,bundles,amount;
	
	printf("OFFER! OFFER! BUY DIGITAL BUNDLES KWA BEI YA MWANA NCHI USIPITWE: \n");
	printf("1. 100MB @ 50: \n");
	printf("2. 500 MB @ 200: \n");
	printf("3. 1 GB @ 350: \n");
	printf("4. 2GB @ 600: \n");
	
	printf("Enter your choice:\t");
	scanf("%d", &choice);
	
	switch(choice)
	{
	
	case 1:
		printf("YOU SELECTED 50MB. COST:50KSH\t");
		break;
      		
	case 2: 
        printf("YOU SELECTED 500MB. COST:200KSH\t");
        break;
		
    case 3:
	    printf("YOU SELECTED 1GB. COST:350KSH\t");
		break;		
	
	case 4:
        printf("YOU SELECTED 2GB. COST:600KSH\t");
        break;
    
    default:
    	printf("INVALID CHOICE:\n");
	}
	
	return 0;
}




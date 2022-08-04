/* Calculates a broker's commission */
#include <stdio.h>

int main()
{
	int share;
	float price_per_share, og_commission, rival_commission, value;
	
	printf("Enter number of the shares: ");
	scanf("%d", &share);
	printf("Enter the price per share: ");
	scanf("%d", &price_per_share);
	
	value = (float)share * price_per_share;
	
	if (value < 2500.00)
	   og_commission = 30.00 + .017 * value;
	else if (value < 6250.00)
	   og_commission = 56.00 + .0066 * value;
	else if (value < 20000.00)
	   og_commission = 76.00 + .0034 * value;
	else if (value < 50000.00)
	   og_commission = 100.00 + .0022 * value;
	else if (value < 500000.00)
	   og_commission = 155.00 + .0011 * value;
	else
	   og_commission = 255.00 + .0009 * value;
	   
	if (og_commission < 39.00)
	   og_commission = 39.00;
	   
	
	if(share < 2000)
	  rival_commission = 33.00 + 0.03 * share;
	else
	  rival_commission = 33.00 + 0.02 * share;
	
	
	printf("Original Broker's Commission: $%.2f\n", og_commission);   
	printf("Rival Broker's Commission: $%.2f\n", rival_commission);
	      
	return 0;
}

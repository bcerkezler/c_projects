#include <stdio.h>

int main() 
{
	int day, month, year, item_no;
	float unit_price;
	
	printf("Enter item number: ");
	scanf("%d", &item_no);
	
	printf("Enter unit price: ");
	scanf("%f", &unit_price);
	
	printf("Enter purchase date (mm/dd/yyy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	
	printf("\n\n");
	
	printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%-d\t$%6.2f\t%-d%/%d/%d", item_no, unit_price, month, day, year);
	
	return 0;	
}

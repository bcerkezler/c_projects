#include <stdio.h>

int main() 
{
	int GSI_prefix, group_id, publisher_code, item_no, check_digit;
	
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &GSI_prefix, &group_id, &publisher_code, &item_no, &check_digit);
	
	printf("GSI prefix: %d\n", GSI_prefix);
	printf("Group identifier: %d\n", group_id);
	printf("Publisher code: %d\n", publisher_code);
	printf("Item number: %d\n", item_no);
	printf("Check digit: %d\n", check_digit);
	
	return 0;	
}

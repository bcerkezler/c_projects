#include <stdio.h>

int main()
{

	float loan, int_rate, m_pay, m_int_rate, bal;
	int no_of_pay, i;

	printf("Enter number of payments: ");
	scanf("%d", &no_of_pay);
	printf("Enter amount of loan: ");
	scanf("%f",&loan);
	printf("Enter interest rate: ");
	scanf("%f",&int_rate);
	printf("Enter monthly payment: ");
	scanf("%f",&m_pay);
	printf("\n");

	m_int_rate = (int_rate / 100.0) / 12.0;

	for (i = 0; i < no_of_pay; i++){
	    bal = (loan - m_pay) + (loan * m_int_rate);
	    printf("Balance remaining after %d. payment: %.2f\n", i+1, bal);
	    loan = bal;
	}

	return 0;
}

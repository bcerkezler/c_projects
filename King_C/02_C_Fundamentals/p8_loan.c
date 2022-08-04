#include <stdio.h>

int main()
{
	
	float loan, int_rate, m_pay, m_int_rate, bal1, bal2, bal3;
	
	
	printf("Enter amount of loan: ");
	scanf("%f",&loan);
	printf("Enter interest rate: ");
	scanf("%f",&int_rate);
	printf("Enter monthly payment: ");
	scanf("%f",&m_pay);
	printf("\n");
	
	m_int_rate = (int_rate / 100.0) / 12.0;
	
	bal1 = (loan - m_pay) + (loan * m_int_rate);
	bal2 = (bal1 - m_pay) + (bal1 * m_int_rate);
	bal3 = (bal2 - m_pay) + (bal2 * m_int_rate);
	
	printf("Balance remaining after first payment: %.2f\n",bal1);
	printf("Balance remaining after second payment: %.2f\n",bal2);
	printf("Balance remaining after third payment: %.2f\n",bal3);
	
	return 0;
}

#include <stdio.h>

int main()
{
	int i;
	float sum = 1.0, fact = 1.0, e;

	printf("Please enter epsilon number: ");
	scanf("%d", &e);

	for (i = 1; (1/fact) > e; i++) {
        fact = fact * i;
        sum += (1 / fact);
	}

	printf("Approximate value of e is %.6f\n", sum);

	return 0;
}


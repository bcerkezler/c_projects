#include <stdio.h>

int main()
{
	int i, n;
	float sum = 1.0, fact = 1.0;

	printf("Please enter a number: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
        fact = fact * i;
        sum += (1 / fact);
	}

	printf("Approximate value of e is %.6f\n", sum);

	return 0;
}

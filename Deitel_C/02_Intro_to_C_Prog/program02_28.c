// Exercise 2.28
// Target Health-Rate Calculator
#include <stdio.h>

int main() {
    
    int age, max_rate, target_min, target_max;

    printf("Enter your age: ");
    scanf("%d", &age);

    max_rate = 220 - age;
    target_min = max_rate / 2;
    target_max = (max_rate * 85) / 100;

    printf("\nYour maximum heart-rate is %d\n", max_rate); 
    printf("Your target heart-rate range is %d-%d\n", target_min, target_max); 

    return 0;
}
// Sales Commissions
#include <stdio.h>

int main(void) {
    int gross, salary;
    int counter[9] = {0};

    printf("Enter a gross sale for a salesperson (Enter 0 to exit):  ");
    scanf("%d", &gross);
    
    while (gross != 0) {
        salary = 200 + (gross * 0.09);
        
        if (salary < 300) {
            counter[0]++; 
        }
        else if (salary >= 300 && salary < 400) {
            counter[1]++;
        }
        else if (salary >= 400 && salary < 500) {
            counter[2]++;
        }
        else if (salary >= 500 && salary < 600) {
            counter[3]++;
        }
        else if (salary >= 600 && salary < 700) {
            counter[4]++;
        }
        else if (salary >= 700 && salary < 800) {
            counter[5]++;
        }
        else if (salary >= 800 && salary < 900) {
            counter[6]++;
        }
        else if (salary >= 900 && salary < 1000) {
            counter[7]++;
        }
        else {
             counter[8]++;
        }
        
        printf("Enter a gross sale for a salesperson (Enter 0 to exit):  ");
        scanf("%d", &gross);        
    }

    printf("\n$200-299 range: %d\n", counter[0]);
    printf("$300-399 range: %d\n", counter[1]);
    printf("$400-499 range: %d\n", counter[2]);
    printf("$500-599 range: %d\n", counter[3]);
    printf("$600-699 range: %d\n", counter[4]);
    printf("$700-799 range: %d\n", counter[5]);
    printf("$800-899 range: %d\n", counter[6]);
    printf("$900-999 range: %d\n", counter[7]);
    printf("$1000 and over range: %d\n", counter[8]);
    
    return 0;
}
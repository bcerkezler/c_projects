#include <stdio.h>

int main() {

    double num = 0.0, total = 0.0;
    char ch;

    printf("Enter an expression: ");
    scanf("%lf", &total);

    while ((ch = getchar()) != '\n') {
        switch (ch) {
            case '+':
                scanf("%lf", &num);
                total += num;
                break;
            case '-':
                scanf("%lf", &num);
                total -= num;
                break;
            case '*':
                scanf("%lf", &num);
                total *= num;
                break;
            case '/':
                scanf("%lf", &num);
                total /= num;
                break;
            default:
                break;
        }
    }

    printf("Value of expression: %f\n", total);
    return 0;
}

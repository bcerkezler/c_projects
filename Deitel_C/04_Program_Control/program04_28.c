// Exercise 4.28
// Calculating Weekly Pay
#include <stdio.h>

int main() { 
    
    char choice;
    int paycode;
    
    double mng_sal;
    
    double hourly_wage;
    double hourly_sal;
    int hours_worked;
    
    double gross;
    double comm_sal;

    double item_value;
    int item_amount;
    double piece_sal;


    do
    {
        printf("\n--Employee Weekly Pay Calculator--\n");
        printf("Enter Y to continue, N to exit...\n");

        choice = getchar();
        
        switch (choice)
        {
        case 'Y':
            printf("\n\nEnter employee paycode: ");
            scanf("%d", &paycode);
            
            switch (paycode)
            {
                case 1:
                    printf("\nCalculating a manager's weekly salary...\n");
                    printf("Enter the fixed weekly salary: ");
                    scanf("%lf", &mng_sal);
                    printf("\nThis manager's weekly salary is %.2f\n", mng_sal);
                    break;
                case 2:
                    printf("\nCalculating an hourly worker's weekly salary...\n");
                    printf("Enter the hourly wage: ");
                    scanf("%lf", &hourly_wage);
                    printf("Enter the hours worked: ");
                    scanf("%d", &hours_worked);

                    if (hours_worked > 40) {
                        hourly_sal = (40 * hourly_wage) + ((hours_worked - 40) * (hourly_wage * 1.5));
                    }
                    else {
                        hourly_sal = hours_worked * hourly_wage;
                    }
                    
                    printf("\nThis hourly worker's weekly salary is %.2f\n", hourly_sal);
                    break;
                case 3:
                    printf("\nCalculating a commission worker's weekly salary...\n");
                    printf("Enter the gross weekly sales of the worker: ");
                    scanf("%lf", &gross);
                    
                    comm_sal = 250 + (gross * 0.057);

                    printf("\nThis commission worker's weekly salary is %.2f\n", comm_sal);
                    break;
                case 4:
                    printf("\nCalculating a pieceworker's weekly salary...\n");
                    printf("Enter the item value: ");
                    scanf("%lf", &item_value);
                    printf("Enter the amount of items: ");
                    scanf("%d", &item_amount);

                    piece_sal = item_amount * item_value;

                    printf("\nThis pieceworker's weekly salary is %.2f\n", piece_sal);
                    break;
                default:
                printf("\nWrong paycode! Try again.\n");
                    break;
            }
            break;
        case 'N':
            break;    
        default:
            puts("\nWrong input choice! Try again.\n");
            break;
        }
        while(getchar() != '\n');
    } while (choice != 'N');
    
    return 0;
}
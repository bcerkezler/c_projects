// Parking Charges
#include <stdio.h>
#include <math.h>

double calculateCharges(double hours);

int main(void) {
    double h;
    double currentCharge;
    double totalHours = 0.0;
    double totalCharges = 0.0;
    int first = 1;
    
    printf("Enter the hours parked for three cars:\n");
    
    for (int i = 1; i <= 3; i++) {
        scanf("%lf", &h);
        totalHours += h;

        if (first == 1) {
            printf("\n%-5s%15s%15s\n", "Car", "Hours", "Charge");
            first = 0;
        }
        
        totalCharges += ( currentCharge = calculateCharges(h) );
        printf("%-5d%15.1f%15.2f\n", i, h, currentCharge);
    }

    printf( "%5s%15.1f%15.2f\n", "TOTAL", totalHours, totalCharges );
    return 0;
}


double calculateCharges(double hours) {
    double charge;

    if (hours < 3.0) {
        charge = 2.0;
    }
    else if (hours < 19.0) {
        charge = 2.0 + (0.5 * ceil(hours - 3.0));
    }
    else {
        charge = 10.0;
    }
    
    return charge;
}
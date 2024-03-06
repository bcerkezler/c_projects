// Distance Between Points
#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2);

int main(void) {
    int x1, x2, y1, y2;

    printf("Enter the first point's coordinates: ");
    scanf("%d%d", &x1, &y1);
    printf("Enter the second point's coordinates: ");
    scanf("%d%d", &x2, &y2);

    printf("\nDistance between the points is %.2lf.", distance(x1, y1, x2, y2));


    return 0;
}

double distance(int x1, int y1, int x2, int y2) {
    double result;

    result = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    return result;
}
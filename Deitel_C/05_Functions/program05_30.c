// Quality Points for Student’s Grades
#include <stdio.h>

int toQualityPoints(int);

int main(void) {
    int average;

    printf("Enter a student's average: ");
    scanf("%d", &average);      
    printf("%d is their quality points.", toQualityPoints(average));
    
    return 0;
}

int toQualityPoints(int avg) {
    
    if (avg >= 90 && avg <= 100) {
        return 4;
    }
    else if (avg >= 80 && avg < 90) {
        return 3;
    }
    else if (avg >= 70 && avg < 80) {
        return 2;
    }
    else if (avg >= 60 && avg < 70) {
        return 1;
    }
    else {
        return 0;
    }
    
}
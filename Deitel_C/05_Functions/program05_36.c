// Towers of Hanoi
#include <stdio.h>

void hanoi(int n, int start, int end, int temp);
void printMove(int start, int end);

int main(void) {
    int n, start, end, temp;

    printf("Enter the amount of disks to move: ");
    scanf("%d", &n);
    printf("Enter the starting and destination pegs: ");
    scanf("%d%d", &start, &end);
    puts("");

    temp = 6 - (start + end);
    hanoi(n, start, end, temp);

    return 0;
}

void hanoi(int n, int start, int end, int temp) {
    if (n == 1) {
        printMove(start, end);
    }
    else {
        hanoi(n-1, start, temp, end);
        printMove(start, end);
        hanoi(n-1, temp, end, start);
    }
    
}

void printMove(int start, int end) {
    printf("%d -> %d\n", start, end);
}
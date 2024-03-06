 #include <stdio.h>

int mystery(int a, int b); // function prototype

int main(void) {
    printf("%s", "Enter two integers: ");
    int x = 0; // first integer
    int y = 0; // second integer
    scanf("%d%d", &x, &y);
    printf("The result is %d\n", mystery(x, y));
}

int mystery(int a, int b) {
    // base case
    if (1 == b) {
        return a;
    }
    else if (-1 == b) {
        return -a;
    }
    else { // recursive step
        if (b > 0) {
            return a + mystery(a, b - 1);
        }
        else {
            return -a + mystery(a, b + 1);
        }
    }
}
// Volume of a Sphere
#include <stdio.h>

#define VOLUME_OF_SPHERE(r) (((4.0) / (3)) * (3.14159) * (r) * (r) * (r))

int main() {

    printf(" %3s     %5s\n", "r", "v");
    printf("  ---    --------\n");
    for (int i = 1; i <= 10; i++) {
        printf(" %3d     %8.3f\n", i, VOLUME_OF_SPHERE(i));
    }
    
    return 0;
}
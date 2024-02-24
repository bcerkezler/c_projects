// Creating Data for a File-Matching Program
#include <stdio.h>

int main(void) {

    FILE *ofPtr, *tfPtr;

    ofPtr = fopen("oldmast.dat", "w");
    tfPtr = fopen("trans.dat", "w");

    fprintf(ofPtr, "%d  %s  %.2f\n", 100, "Alan Jones", 348.17);
    fprintf(ofPtr, "%d  %s  %.2f\n", 300, "Mary Smith", 27.19);
    fprintf(ofPtr, "%d  %s  %.2f\n", 500, "Sam Sharp", 0.00);
    fprintf(ofPtr, "%d  %s  %.2f", 700, "Suzy Green", -14.22);

    fprintf(tfPtr, "%d  %.2f\n", 100, 27.14);
    fprintf(tfPtr, "%d  %.2f\n", 300, 62.11);
    fprintf(tfPtr, "%d  %.2f\n", 400, 100.56);
    fprintf(tfPtr, "%d  %.2f", 900, 82.17);    


    fclose(ofPtr);
    fclose(tfPtr);

    return 0;
}

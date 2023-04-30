#include "functions.h"

void tail(FILE *file, int number_of_strings) {
    char read[50];
    int all_strings = 0;

    while (fgets(read, 50, file)) {
        all_strings++;
    }

    rewind(file);

    for (int i = 0; i < all_strings; ++i) {
        fgets(read, 50, file);
        if (i >= all_strings - number_of_strings) {
            printf("%s", read);
        }
    }
}

void merge(FILE *file1, FILE *file2) {
    char read1[50];
    char read2[50];

    int j = 1, k = 1;

    while (j == 1 || k == 1) {
        j = 0;
        k = 0;
        if (fgets(read1, 50, file1)) {
            printf("%s", read1);
            j = 1;
        }
        if (fgets(read2, 50, file2)) {
            printf("%s", read2);
            k = 1;
        }
    }
}

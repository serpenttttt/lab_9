#include "functions.h"

int main(int argc, char *argv[]) {

    puts("Task1\n"
         "Input the number of strings");

    int number_of_strings;
    if (scanf("%d", &number_of_strings)) {
        if (number_of_strings > 0) {

        } else {
            puts("Invalid number. Number of string is 5 now");
            number_of_strings = 5;
        }
    } else {
        puts("Invalid number. Number of string is 5 now");
        number_of_strings = 5;
    }

    FILE *file;
    file = fopen(argv[1], "r");

    if (file == NULL)
        puts("No such file");
    else {
        tail(file, number_of_strings);
        fclose(file);
    }

    puts("\n\nTask2\n");

    FILE *file1;
    file1 = fopen(argv[2], "r");
    FILE *file2;
    file2 = fopen(argv[3], "r");

    if (file1 == NULL || file2 == NULL)
        puts("No such file");
    else {
        merge(file1, file2);

        fclose(file1);
        fclose(file2);
    }

    return 0;
}

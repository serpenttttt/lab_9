#include <stdio.h>
#include "tail.h"

int main (int argc, char *argv[]) {
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
}
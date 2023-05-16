#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int strings_in_pages = atoi(argv[2]);
    int length = atoi(argv[4]);
    int current_string = 0;
    char c;

    FILE *file;

    file = fopen("file.txt", "r");

    for (int page_number = 1; page_number <= length; ++page_number) {
        printf(" -- Page %d --\n", page_number);
        while (current_string < strings_in_pages) {
            int current_length = 1;
            while ((c = fgetc(file)) != '\n' && current_length <= length) {
                putchar(c);
                ++current_length;
            }
            putchar('\n');
            current_string += 1;
        }
        current_string = 0;
    }
}
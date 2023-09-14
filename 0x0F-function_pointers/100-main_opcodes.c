#include <stdio.h>
#include <stdlib.h>

void print_opcodes(char *start, int num_bytes) {
    for (int i = 0; i < num_bytes; i++) {
        printf("%02hhx", start[i]);
        if (i < num_bytes - 1) {
            printf(" ");
        } else {
            printf("\n");
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Error\n");
        return 1;
    }

    int num_bytes = atoi(argv[1]);

    if (num_bytes < 0) {
        fprintf(stderr, "Error\n");
        return 2;
    }

    char *main_address = (char *)main;

    // Print the opcodes
    print_opcodes(main_address, num_bytes);

    return 0;
}

#include "Queen.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char *filename = "duomenys.txt"; // Default filename
    if (argc > 1) {
        filename = argv[1]; // Use the provided filename
    }

    FILE *input = fopen(filename, "r");
    if (input == NULL) {
        printf("Klaida atidarant failą: %s\n", filename);
        return 1;
    }

    solve(input);

    fclose(input);
    return 0;
}
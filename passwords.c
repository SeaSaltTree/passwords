#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *input;
    FILE *output;
    char pwd[255];
    input = fopen(argv[1], "r");
    output = fopen(argv[2], "w");
    while (fscanf(input, "%s", pwd) != EOF) {
        fprintf(output, "%s"), pwd;
    }
    fclose(input);
    fclose(output);
}
#include <stdio.h>
int main() {
    FILE *file = fopen("output.txt", "w");
    fputs("Hello, World!\n", file);
    fclose(file);
    printf("Data written to the file successfully.\n");
    return 0;
}
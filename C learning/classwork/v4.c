#include <stdio.h>
int main() {
    char data[256];
    FILE *file;
    file = fopen("output.txt", "a");
    printf("Enter the data to append to the file: ");
    fgets(data, sizeof(data), stdin);
    fputs(data, file);
    fclose(file);
    printf("Data appended to the file successfully.\n");
    return 0;
}
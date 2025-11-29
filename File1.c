#include <stdio.h>

int main(void) {
    FILE *fp = fopen("File1.txt", "w");
    if (fp == NULL) {
        perror("fopen");
        return 1;
    }

    fprintf(fp, "Hello, File1!\n"); // provide format string / data
    fclose(fp);
    return 0;
}
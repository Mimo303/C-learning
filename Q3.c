/*Echo Program: Develop a program that reads a line of text from the user and
 echoes it back with a count of characters.*/
#include<stdio.h>
#include<string.h>

int main(void){
    char line[100];
    printf("Enter the line below:\n");
    if (fgets(line, sizeof(line), stdin) == NULL) {
        printf("No input\n");
        return 1;
    }

    /* remove trailing newline if present */
    line[strcspn(line, "\n")] = '\0';

    /* count characters */
    int count = (int)strlen(line);

    /* echo and print count */
    printf("You entered: %s\n", line);
    printf("Character count: %d\n", count);

    return 0;
}
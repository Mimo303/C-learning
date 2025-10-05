/*4. Ask the user to enter a string (character array) and a character. Write a program that
counts the number of occurrences of that character in the string.*/

#include<stdio.h>
#include<string.h>
int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline if present

    printf("Enter the character to count: ");
    scanf(" %c", &ch); // Space before %c skips leftover newline

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            count++;
        }
    }

    printf("'%c' occurs %d times in the string.\n", ch, count);
    return 0;
}


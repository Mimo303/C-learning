/* Pangram Checker: Write a function named is_pangram(s) that takes a string s and
 returns True if the string is a Pangram (contains every letter of the alphabet at least
 once), and False otherwise.
 ○ Example Pangram: "The quick brown fox jumps over the lazy dog"*/


 #include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_pangram(char* s) {
    int letters[26] = {0};  // Track presence of a-z
    int len = strlen(s);
    int i;
    int count = 0;
    
    for (i = 0; i < len; i++) {
        char ch = tolower(s[i]);
        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';
            if (letters[index] == 0) {
                letters[index] = 1;
                count++;
            }
        }
    }
    
    return (count == 26) ? 1 : 0;
}

int main() {
    char s[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;  // Remove newline
    
    if (is_pangram(s)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}

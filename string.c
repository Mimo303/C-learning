#include <stdio.h> 

int main() {
    char ch = 'C';
    printf("%c\n", ch); 

    char s[] = "Hello"; // Correct: Use double quotes for string literals
    printf("%s\n", s); // Correct: Use %s format specifier and pass the string variable 's'

    char sen[] = "Welcome to my C journey!!";
    printf("%s\n", sen); // Correct: Use %s and pass the string variable 'sen'
    
    return 0; 
}
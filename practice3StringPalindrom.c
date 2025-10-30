#include <stdio.h>   
#include <string.h>  


int is_palindrome(char* word) {  
    int length = strlen(word);   
    int i;                       
    
    
    for (i = 0; i < length / 2; i++) {  
        if (word[i] != word[length - 1 - i]) {
            return 0;  // Mismatch! Not a palindrome.
        }
    }
    
    
    return 1;  // It's a palindrome!
}


int main() {
    char user_word[100];  
    
    
    printf("Enter a word to check if it's a palindrome: ");
    scanf("%s", user_word);  
    
    
    if (is_palindrome(user_word)) {
        printf("\"%s\" is a palindrome! It reads the same forwards and backwards. \n", user_word);
    } else {
        printf("\"%s\" is not a palindrome. Try flipping it around! \n", user_word);
    }
    
    return 0; 
}

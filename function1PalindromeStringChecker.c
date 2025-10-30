/* Palindrome String Checker: Write a Python function (or a function in your preferred language) named is_palindrome(s) that
 takes a string s as a parameter and returns a boolean value (True or False) indicating whether the string reads the 
 same forwards and backwards.*/

 #include <stdio.h>   
#include <string.h>                                                 // For getting word length


// Output: 1 if yes (true), 0 if no (false)
int is_palindrome(char* word) {  
    int length = strlen(word);   
    int i;                       
    
    // Step 2-4: Loop only halfway (e.g., for 5 letters, check 2 pairs)
    for (i = 0; i < length / 2; i++) {  
        if (word[i] != word[length - 1 - i]) {
            return 0;  // Mismatch! Not a palindrome. Game over.
        }
    }
    
    // Yay! All pairs matched.
    return 1;  // It's a palindrome!
}


int main() {
    char word1[] = "radar";    
    char word2[] = "hello";    
    
    // Test word1
    if (is_palindrome(word1)) {
        printf("\"%s\" is a palindrome! Like a mirror word.\n", word1);
    } else {
        printf("\"%s\" is not. Try flipping it!\n", word1);
    }
    
    // Test word2
    if (is_palindrome(word2)) {
        printf("\"%s\" is a palindrome! Like a mirror word.\n", word2);
    } else {
        printf("\"%s\" is not. Try flipping it!\n", word2);
    }
    
    return 0;  // All done!
}


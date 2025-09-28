/* 4. Ask a user to input a character. Check if the character is a vowel (a, e, i, o, u) or a consonant. Assume the input is a lowercase letter.*/

#include<stdio.h>
int main(){
    char letter;
    printf("enter the letter:");
    scanf("%c",&letter);
    switch(letter){
        case 'e':
        case 'i':
        case 'a':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf(" %c is a vowel",letter);
        break;

        default:
        printf(" %c is a consonant",letter);

    }
}
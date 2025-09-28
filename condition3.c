/* 4. Ask a user to input a character. Check if the character is a vowel (a, e, i, o, u) or a consonant. Assume the input is a lowercase letter.   USING IF ELSE; */

#include<stdio.h>
int main(){
    char letter;

    printf("Enter the letter:");
    scanf("%c",&letter);
    if(letter=='a' || letter=='A'){
        printf(" %c is a Vowel",letter);
    }
    else if(letter=='e' || letter=='E'){
        printf(" %c is a vowel",letter);
    }
    else if(letter=='i' || letter=='I'){
        printf(" %c is a vowel",letter);
    }
    else if(letter=='o' || letter=='O'){
        printf(" %c is vowel",letter);
    }
    else if(letter=='u' || letter=='U'){
        printf(" %c is a vowel",letter);
    }
    else{
        printf(" %c is a consonant.",letter);
    }
    
}
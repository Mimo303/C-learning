// finding vowel or consonant using switch case ;

#include<stdio.h>
int main(){
    char vowel;
    printf("Enter an alphabet:");
    scanf("%c",&vowel);
    switch(vowel){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("%c is a vowel.",vowel);
        break;
        default:
        printf(" %c  is a consonant.",vowel);
    }
}
//Write a program to store and display the details of a Book (Title, Author, Price).
#include<stdio.h>
#include<string.h>

struct book{
    char title[50];
    char author[50];
    float price;
};
int main(){
    struct book b1;
    //input
    printf("Enter Title:");
    scanf("%s",&b1.title);
    printf("Enter Author:");
    scanf("%s",&b1.author);
    printf("Enter Price:");
    scanf("%f",&b1.price);

    //output

    printf("\n-----Book Details---\n");
    printf("Title: %s\n",b1.title);
    printf("Title: %s\n",b1.author);
    printf("Title: %.2f\n",b1.price);
}

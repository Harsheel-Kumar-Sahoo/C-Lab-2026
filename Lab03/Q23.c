#include <stdio.h>

void bookInfo() {
    struct book
    {
        char title[50];
        char author[50];
        float price;
    };

    struct book b;
    printf("Enter the title of the book : ");
    scanf("%s", b.title);
    printf("Enter the author of the book : ");
    scanf("%s", b.author);
    printf("Enter the price of the book : ");
    scanf("%f", &b.price);

    printf("The book details are :\n");
    printf("Title : %s\n", b.title);
    printf("Author : %s\n", b.author);
    printf("Price : %f\n", b.price);
}

int main(){
    bookInfo();
    
    return 0;
}
// 8.soru => struct kullanarak bir Kitap yığıtı oluşturunuz. Her kitabın adı, yazarı ve yıl bilgisi kullanıcıdan alınıp yığıta eklenecektir. Kitap ekleme-çıkarma-listeleme-en üstteki kitabı yazdırma-toplam kitap sayısını yazdırma-çıkış şeklinde 6 seçenek olarak menü yapısı oluşturup bu işlemler için gerekli fonksiyonları yazınız.
#include <stdio.h>
#include <string.h>
#define SIZE 3

// Kitap bilgilerini tutan yapı
struct Book {
    char title[50];
    char author[50];
    int year;
};

// Kitap yığını
struct Book stack[SIZE];
int top = -1;

// Yığıtın dolu olup olmadığını kontrol eden fonksiyon
int isFull() {
    return top == SIZE - 1;
}

// Yığıtın boş olup olmadığını kontrol eden fonksiyon
int isEmpty() {
    return top == -1;
}

// Yığıta kitap ekleyen fonksiyon (Push)
void push() {
    if (isFull()) {
        printf("Stack is full! Cannot add more books.\n");
        return;
    }
    struct Book newBook;

    // Kitap bilgilerini alma
    printf("Book title: ");
    getchar(); // Önceki girişten kalan '\n' karakterini temizle
    fgets(newBook.title, sizeof(newBook.title), stdin);
    newBook.title[strcspn(newBook.title, "\n")] = '\0'; // Yeni satır karakterini temizle

    printf("Book author: ");
    fgets(newBook.author, sizeof(newBook.author), stdin);
    newBook.author[strcspn(newBook.author, "\n")] = '\0'; // Yeni satır karakterini temizle

    printf("Book year: ");
    scanf("%d", &newBook.year);

    stack[++top] = newBook; // Kitabı yığıta ekleme
    printf("Book successfully added to the stack.\n");
}

// Yığıttan kitap çıkaran fonksiyon (Pop)
void pop() {
    if (isEmpty()) {
        printf("Stack is empty! No books to remove.\n");
        return;
    }
    struct Book book = stack[top--];
    printf("Removed book: %s - %s (%d)\n", book.title, book.author, book.year);
}

// Yığıttaki kitapları listeleyen fonksiyon
void listBooks() {
    if (isEmpty()) {
        printf("Stack is empty! No books to list.\n");
        return;
    }
    printf("\nBooks in the stack:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d. Book: %s - %s (%d)\n", top - i + 1, stack[i].title, stack[i].author, stack[i].year);
    }
}

// Ana program
int main() {
    int choice;

    do {
        printf("\n--- Book Stack Menu ---\n");
        printf("1. Add Book (Push)\n");
        printf("2. Remove Book (Pop)\n");
        printf("3. List Books\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                listBooks();
                break;
            case 4:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
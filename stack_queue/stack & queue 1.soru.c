// 1.soru => 10 adet sayıyı rastgele üretip yığıta ekleyen ve sonra yığıttaki tüm değerleri yazdıran programın kodunu yazınız.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int stack[SIZE];
int top = -1;

// Yığıt dolu mu kontrolü
int isFull() {
    return (top == SIZE - 1);
}

// Yığıt boş mu kontrolü
int isEmpty() {
    return (top == -1);
}

// Eleman ekleme (push)
void push(int value) {
    if (isFull()) {
        printf("Stack is full! Cannot add more elements.\n");
        return;
    }
    stack[++top] = value;
    printf("Added to stack: %d\n", value);
}

// Yığıtı listeleme
void displayStack() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
        return;
    }

    printf("Stack contents: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    srand(time(0)); // Rastgele sayı için zaman başlatıcı

    // Rastgele sayılar ekleme
    for (int i = 0; i < SIZE; i++) {
        int randomNumber = rand() % 11; // 0-10 arasında rastgele sayı
        push(randomNumber);
    }

    // Yığıtı yazdırma
    printf("\nFinal Stack State:\n");
    displayStack();

    return 0;
}
// 2.soru => Kullanıcıdan alınan N değerine göre yığıttan N adet sayıyı çektikten sonra yığıtın son durumunu tekrar yazdırınız.
#include <stdio.h>
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
}

// Eleman çıkarma (pop)
int pop() {
    if (isEmpty()) {
        printf("Stack is empty! Cannot remove elements.\n");
        return -1; // Hatalı durum için işaret değeri
    }
    return stack[top--];
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
    int n, value;

    // Kullanıcıdan eleman ekleme
    printf("Enter 10 numbers to push into the stack:\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &value);
        push(value);
    }

    // Yığıtı yazdırma
    printf("Initial Stack State:\n");
    displayStack();

    // Kullanıcıdan N değerini alma ve eleman çıkarma
    printf("Enter the number of elements to pop: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int removedValue = pop();
        if (removedValue != -1) {
            printf("Removed from stack: %d\n", removedValue);
        }
    }

    // Yığıtın son durumunu yazdırma
    printf("Final Stack State:\n");
    displayStack();

    return 0;
}
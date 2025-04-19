// 5.soru => Girilen bir kelimeyi yığıt kullanarak tersten yazdırınız.(char tipinde bir yığıt dizisi kullanılacaktır, tüm karakterler tek tek push fonksiyonu ile yığıta atılacak daha sonra pop fonksiyonu ile çekilen karakterler ekrana yazdırılacaktır.)
#include <stdio.h>
#include <string.h>
#define SIZE 100

char stack[SIZE];
int top = -1;

// Yığıt dolu mu kontrolü
int isFull() {
    return top == SIZE - 1;
}

// Yığıt boş mu kontrolü
int isEmpty() {
    return top == -1;
}

// Eleman ekleme (push - yığıt)
void push(char ch) {
    if (isFull()) {
        printf("Stack is full! Cannot push '%c'.\n", ch);
        return;
    }
    stack[++top] = ch;
}

// Eleman çıkarma (pop - yığıt)
char pop() {
    if (isEmpty()) {
        printf("Stack is empty! Cannot pop.\n");
        return '\0'; // Hatalı durum için işaret karakteri
    }
    return stack[top--];
}

int main() {
    char word[SIZE];

    // Kullanıcıdan kelime alma
    printf("Enter a word to reverse: ");
    scanf("%s", word);

    // Kelimenin tüm karakterlerini yığıta atma
    for (int i = 0; i < strlen(word); i++) {
        push(word[i]);
    }

    // Yığıttan karakterleri çıkararak tersini yazdırma
    printf("Reversed word: ");
    while (!isEmpty()) {
        printf("%c", pop());
    }
    printf("\n");

    return 0;
}
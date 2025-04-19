// 6.soru => Girilen bir kelimenin palindrom olup olmadığını yığıt kullanarak bulunuz.(Bir önceki sorunun devamı gibi düşünülerek yapılabilir)
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
    int isPalindrome = 1;

    // Kullanıcıdan kelime alma
    printf("Enter a word: ");
    scanf("%s", word);

    int length = strlen(word);

    // Kelimenin tüm karakterlerini yığıta ekleme
    for (int i = 0; i < length; i++) {
        push(word[i]);
    }

    // Karakterleri yığıttan çıkararak karşılaştırma
    for (int i = 0; i < length; i++) {
        char poppedChar = pop();
        if (poppedChar != word[i]) { // Tersiyle karşılaştırılıyor
            isPalindrome = 0; // Palindrom değil
            break;
        }
    }

    // Sonuç yazdırma
    if (isPalindrome) {
        printf("%s is a palindrome.\n", word);
    } else {
        printf("%s is not a palindrome.\n", word);
    }

    return 0;
}
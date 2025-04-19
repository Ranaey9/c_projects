// 7.soru => Girilen bir aritmetiksel ifadede parantez hatası olup olmadığını yığıt kullanarak bulunuz.(Örneğin; (2+3)*((8-4)/2) şeklinde verilen bir ifade için her açma parantezi ‘(’geldiğinde yığıta bu parantez eklenir, kapama parantezi ‘)’ geldiğinde yığıttan bir çekme işlemi yapılır. En son durumda yığıt boş ise hata yoktur)
#include <stdio.h>
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

// Eleman ekleme (push)
void push(char ch) {
    if (isFull()) {
        printf("Stack is full! Cannot push '%c'.\n", ch);
        return;
    }
    stack[++top] = ch;
}

// Eleman çıkarma (pop)
char pop() {
    if (isEmpty()) {
        printf("Stack is empty! Cannot pop.\n");
        return '\0'; // Hatalı durum için işaret karakteri
    }
    return stack[top--];
}

int main() {
    char expression[SIZE];

    // Kullanıcıdan aritmetik ifade alma
    printf("Enter an arithmetic expression: ");
    scanf("%s", expression);

    // Parantez kontrolü
    for (int i = 0; expression[i] != '\0'; i++) {
        if (expression[i] == '(') {
            push('(');
        } else if (expression[i] == ')') {
            if (isEmpty()) { // Yığıt boşken kapama parantezi varsa hata
                printf("Parenthesis mismatch detected!\n");
                return 0;
            }
            pop();
        }
    }

    // Son durum kontrolü
    if (isEmpty()) {
        printf("Parentheses are correctly matched.\n");
    } else {
        printf("Parenthesis mismatch detected!\n");
    }

    return 0;
}
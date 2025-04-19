// 4.soru => Kuyruk ve Yığıt veri yapıları tek program dosyası içinde tanımlanacaktır. Yığıttan çekilen N adet sayıyı kuyruğa ekleyen ve yığıt ve kuyruğun son halini ekrana yazdıran programı yazınız. (Pop-Push, Enqueue-Dequeue vb. standart fonksiyonlar kullanılmalıdır.)
#include <stdio.h>
#include <stdlib.h>
#define N 5

int stack[N];
int top = -1;

int queue[N];
int front = -1, rear = -1;

// Yığıt dolu mu kontrolü
int isStackFull() {
    return top == N - 1;
}

// Yığıt boş mu kontrolü
int isStackEmpty() {
    return top == -1;
}

// Eleman ekleme (push - yığıt)
void push(int x) {
    if (isStackFull()) {
        printf("Stack is full! Cannot push more elements.\n");
        return;
    }
    stack[++top] = x;
    printf("Pushed to stack: %d\n", x);
}

// Eleman çıkarma (pop - yığıt)
int pop() {
    if (isStackEmpty()) {
        printf("Stack is empty! Cannot pop elements.\n");
        return -1; // Hatalı durum için işaret değer
    }
    int x = stack[top--];
    printf("Popped from stack: %d\n", x);
    return x;
}

// Kuyruk dolu mu kontrolü
int isQueueFull() {
    return rear == N - 1;
}

// Kuyruk boş mu kontrolü
int isQueueEmpty() {
    return front == -1 || front > rear;
}

// Eleman ekleme (enqueue - kuyruk)
void enqueue(int x) {
    if (isQueueFull()) {
        printf("Queue is full! Cannot enqueue more elements.\n");
        return;
    }
    if (front == -1) {
        front = 0; // İlk eleman eklenirken front ayarlanır
    }
    queue[++rear] = x;
    printf("Enqueued to queue: %d\n", x);
}

// Yığıt listeleme
void displayStack() {
    if (isStackEmpty()) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

// Kuyruk listeleme
void displayQueue() {
    if (isQueueEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int num;

    // Yığıta eleman ekleme
    printf("Enter %d numbers to push into the stack:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        push(num);
    }

    // Yığıttan N eleman çekerek kuyruğa ekleme
    for (int i = 0; i < N; i++) {
        int poppedElement = pop();
        if (poppedElement != -1) {
            enqueue(poppedElement);
        }
    }

    // Yığıt ve kuyruk durumu yazdırma
    printf("\nFinal state of the stack:\n");
    displayStack();

    printf("\nFinal state of the queue:\n");
    displayQueue();

    return 0;
}
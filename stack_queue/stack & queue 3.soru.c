// 3.soru => Kullanıcıdan alınan sayılar bir kuyruk yapısına eklendikten sonra kuyruktaki sayıların toplamını ve en büyük sayıyı ekrana yazdırınız.
#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Kuyruk dolu mu kontrolü
int isFull() {
    return rear == SIZE - 1;
}

// Kuyruk boş mu kontrolü
int isEmpty() {
    return front == -1 || front > rear;
}

// Kuyruğa eleman ekleme (Enqueue)
void enqueue(int x) {
    if (isFull()) {
        printf("Queue is full! Cannot add more elements.\n");
        return;
    }
    if (front == -1) {
        front = 0; // İlk elemanı eklerken front ayarlanır
    }
    queue[++rear] = x;
    printf("Added to queue: %d\n", x);
}

// Kuyruktaki elemanları listeleme ve toplamı/en büyük değeri hesaplama
void listQueue() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    
    int sum = 0, max = queue[front];
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
        sum += queue[i]; // Toplamı hesaplama
        if (queue[i] > max) {
            max = queue[i]; // En büyük sayıyı bulma
        }
    }
    printf("\n");
    printf("Total sum: %d\n", sum);
    printf("Maximum value: %d\n", max);
}

int main() {
    int x;

    // Kullanıcıdan kuyruğa eleman ekleme
    printf("Enter %d numbers to add to the queue:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &x);
        enqueue(x);
    }

    // Kuyruğu listeleme ve toplam/en büyük değeri yazdırma
    printf("\nFinal state of the queue:\n");
    listQueue();

    return 0;
}
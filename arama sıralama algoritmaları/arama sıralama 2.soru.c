// 2.soru => Girilen sayıları bir diziye aktardıktan sonra kullanıcının seçimine göre küçükten büyüğe veya büyükten küçüğe diziyi sıralayıp ekrana yazdırınız.(Kabarcık veya Seçmeli sıralama ile)
#include <stdio.h>

void selectionSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;

        for (int k = 0; k < n; k++) {
            printf("%d ", array[k]);
        }
        printf("\n");
    }
}

void bubbleSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }

     for (int k = 0; k < n; k++) {
            printf("%d ", array[k]);
        }
        printf("\n");
    }
}

int main() {
    int n, choice;

    // Kullanıcıdan diziyi alma
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int array[n];

    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Kullanıcıdan sıralama türünü seçme
    printf("Choose sorting method:\n1. Selection Sort\n2. Bubble Sort\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Selection Sort process:\n");
        selectionSort(array, n);
    } else if (choice == 2) {
        printf("Bubble Sort process:\n");
        bubbleSort(array, n);
    }

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
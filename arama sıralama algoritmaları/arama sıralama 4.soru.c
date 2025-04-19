// Kullanıcıdan alınan N değerine göre N adet rastgele sayı içeren bir dizi oluşturulacaktır. Bu sayılar kullanıcının seçeceği sıralama algoritmasına göre sıralanacaktır. Her sıralama adımında dizinin anlık durumu yazdırılmalıdır.
#include <stdio.h>

// Selection Sort fonksiyonu
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

        // Geçerli dizi durumunu yazdır
        for (int k = 0; k < n; k++) {
            printf("%d ", array[k]);
        }
        printf("\n");
    }
}

// Bubble Sort fonksiyonu
void bubbleSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }

        // Geçerli dizi durumunu yazdır
        for (int k = 0; k < n; k++) {
            printf("%d ", array[k]);
        }
        printf("\n");
    }
}

int main() {
    int n, choice;

    // Kullanıcıdan dizi boyutunu alma
    printf("Enter the size of the array (N): ");
    scanf("%d", &n);

    int array[n];

    // Kullanıcıdan dizi elemanlarını alma
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Kullanıcıdan sıralama algoritması seçimini alma
    printf("Choose sorting method:\n1. Selection Sort\n2. Bubble Sort\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Selection Sort Process:\n");
        selectionSort(array, n);
    } else if (choice == 2) {
        printf("Bubble Sort Process:\n");
        bubbleSort(array, n);
    } else {
        printf("Invalid choice.\n");
        return 1;
    }

    // Sıralı diziyi yazdırma
    printf("Sorted Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
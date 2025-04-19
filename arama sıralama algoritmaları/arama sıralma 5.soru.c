// İkili arama fonksiyonunu özyinelemeli olarak yazınız.
#include <stdio.h>

int binarySearchRecursive(int array[], int left, int right, int target) {
    if (left > right) {
        return -1;
    }

    int mid = (left + right) / 2;

    if (array[mid] == target) {
        return mid;
    } else if (array[mid] < target) {
        return binarySearchRecursive(array, mid + 1, right, target);
    } else {
        return binarySearchRecursive(array, left, mid - 1, target);
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
    }
}

int main() {
    int n, target;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int array[n];

    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    bubbleSort(array, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Enter the number to search: ");
    scanf("%d", &target);

    int result = binarySearchRecursive(array, 0, n - 1, target);

    if (result == -1) {
        printf("Number %d not found.\n", target);
    } else {
        printf("Number %d found at position %d.\n", target, result + 1);
    }

    return 0;
}
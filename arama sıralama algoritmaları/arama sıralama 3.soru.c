// 3.soru => Girilen sayıları bir diziye aktardıktan sonra İkili Arama algoritmasını kullanarak kullanıcının girdiği sayı dizide aranıp bulunduğu konum yazdırılacaktır. Ayrıca kaç adımda bulunduğu da yazılacaktır.(İkili arama algoritmasını kullanabilmek için dizinin önce sıralanması gerekir)
#include <stdio.h>

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

int binarySearch(int array[], int left, int right, int target, int *steps) {
    *steps = 0;

    while (left <= right) {
        (*steps)++;
        int mid = (left + right) / 2;

        if (array[mid] == target) {
            return mid;
        } else if (array[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n, target, steps;

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

    int result = binarySearch(array, 0, n - 1, target, &steps);

    if (result == -1) {
        printf("Number %d not found.\n", target);
    } else {
        printf("Number %d found at position %d in %d steps.\n", target, result + 1, steps);
    }

    return 0;
}
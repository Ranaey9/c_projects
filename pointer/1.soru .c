// 1.syf= 1. soru Girilen 2 sayıyı sadece pointer değişkenler kullanarak toplayınız.(malloc ile)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1, *ptr2;
    int sum;
    ptr1 = (int *)malloc(sizeof(int));
    ptr2 = (int *)malloc(sizeof(int));

    if (ptr1 == NULL || ptr2 == NULL) {
        printf("Memory allocation error!\n");
        return 1;
    }
    printf("Enter the first number: ");
    scanf("%d", ptr1);
    printf("Enter the second number: ");
    scanf("%d", ptr2);

    sum = *ptr1 + *ptr2;
    printf("\nSum: %d\n", sum);

    free(ptr1);
    free(ptr2);

    return 0;
}
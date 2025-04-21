// 1.syf= 5. parametre olarak verilen 3 sayıdan en büyük ve en küçüğünü bulan fonksiyonu yazınız. En büyük ve en küçük sayıları main içinde yazdırınız.
#include <stdio.h>

void findMinMax(int *a, int *b, int *c, int *max, int *min) {
    *max = *a;
    if (*b > *max) {
        *max = *b;
    }
    if (*c > *max) {
        *max = *c;
    }

    *min = *a;
    if (*b < *min) {
        *min = *b;
    }
    if (*c < *min) {
        *min = *c;
    }
}

int main() {
    int a, b, c, max, min;

    printf("Enter three numbers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    findMinMax(&a, &b, &c, &max, &min);

    printf("Maximum: %d\nMinimum: %d\n", max, min);

    return 0;
}
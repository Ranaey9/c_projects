// 1.syf= 3. soru Verilen 2 sayıdan büyük olan sayı küçük sayıya bölünerek bölüm ve kalanı bulan fonksiyonu yazınız. (Sayıları alma ve bölüm/kalan sonuçları yazdırma işlemleri “main” içinde yapılacaktır.)
#include <stdio.h>

int calculateDivisionSteps(int *a, int *b) {
    int steps = 0;

    if (*b == 0) {
        printf("Error! Division by zero.\n");
        return -1;
    }

    while (*a >= *b) {
        *a -= *b; 
        steps++;
    }

    return steps;
}

int main() {
    int a, b;

    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    int steps = calculateDivisionSteps(&a, &b);

    if (steps != -1) {
        printf("Steps: %d\nRemainder: %d\n", steps, a); 
    }

    return 0;
}
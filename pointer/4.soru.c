// 1.syf= 4. Girilen sayının faktöriyelini bulan fonksiyon yazınız. Fonksiyonda return kullanılmayacak ve faktöriyel sonucu main de yazdırılacaktır.
#include <stdio.h>

void calculateFactorial(int *number) {
    int factorial = 1;

    for (int i = 1; i <= *number; i++) {
        factorial *= i; 
    }

    *number = factorial; 
}

int main() {
    int number;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);

    calculateFactorial(&number); 
    printf("Factorial: %d\n", number);

    return 0;
}
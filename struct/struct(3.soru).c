// (!!!!)3.soru => Kullanıcıdan gerçel ve sanal değerleri alınan
// 2 karmaşık sayı parametre olarak ComplexAdd fonksiyonuna gönderilecek ve sum sonucu karmaşık sayı tipinde döndürülüp main’de yazdırılacaktır.
#include <stdio.h>

struct Complex {
    float real; // Gerçek kısım
    float imaginary; // Sanal kısım
};

struct Complex addComplex(struct Complex a, struct Complex b) {
    struct Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

int main() {
    struct Complex number1 = {3.2, 4.5};
    struct Complex number2 = {1.8, -2.3};

    struct Complex result = addComplex(number1, number2);

    printf("First Complex Number: %.2f + %.2fi\n", number1.real, number1.imaginary);
    printf("Second Complex Number: %.2f + %.2fi\n", number2.real, number2.imaginary);
    printf("Sum of Complex Numbers: %.2f + %.2fi\n", result.real, result.imaginary);

    return 0;
}
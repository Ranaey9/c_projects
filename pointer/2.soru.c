// 1.syf= 2. soru Girilen A ve B sayılarını yer değiştiren fonksiyonu yazınız.(Sayı alma ve sonuçları yazdırma işlemleri “main” içinde yapılacaktır.)
#include <stdio.h>

// Yer değiştirme işlemi (temp değişkeni kullanılarak)
void swapWithTemp(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping:\na: %d\nb: %d\n", *a, *b);
}

int main() {
    int a, b;

    // Kullanıcıdan sayıları alma
    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    // Yer değiştirme fonksiyonunu çağırma
    swapWithTemp(&a, &b);

    return 0;
}
// Girilen iki sayıyı yer değiştiren bir fonksiyon yazınız. Ancak yer değiştirme işlemi temp değişkeni kullanılmadan yapılacaktır
// #include <stdio.h>
// void hazır(int *a, int *b) {
//     *a = *a + *b;
//     *b = *a - *b;
//     *a = *a - *b;
//     printf("After swapping:\na: %d\nb: %d\n", *a, *b);
// }

// int main() {
//     int a, b;
//     printf("Enter two numbers (a and b): ");
//     scanf("%d %d", &a, &b);
//     hazır(&a, &b);
//     return 0;
// }
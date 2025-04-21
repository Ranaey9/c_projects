// 1.syf= 6. soru Parametre olarak verilen 2 sayının toplamını ve farkını bulan bir fonksiyon yazılacaktır. Sayılar main metodunda kullanıcıdan alınarak fonksiyona gönderilecektir, toplam ve fark sonuçları da main metodunda yazılacaktır.
#include <stdio.h>

void top(int *a, int *b, int *c) {
    *c = *a + *b;
    printf("top: %d\n", *c);
}

void cık(int *a, int *b, int *c) {
    *c = *a - *b;
    printf("cıkarma: %d\n", *c);
}

int main() {
    int a, b, c;
    printf("a ve b girin: ");
    scanf("%d %d", &a, &b);
    top(&a, &b, &c);
    cık(&a, &b, &c);
    return 0;
}
// 1.soru => Bir dikdörtgen için uzun ve kısa kenarın tutulduğu bir struct tanımlayınız. Kullanıcıdan alınan kenar değerlerine göre bir dikdörtgen oluşturup Hesapla fonksiyonuna göndererek alanını ve çevresini hesaplayınız.
#include <stdio.h>

struct Dikdortgen {
    int kisaKenar;
    int uzunKenar;
};

void hesaplaVeYazdir(struct Dikdortgen dikdortgen) {
    int alan = dikdortgen.kisaKenar * dikdortgen.uzunKenar;
    int cevre = 2 * (dikdortgen.kisaKenar + dikdortgen.uzunKenar);

    printf("Dikdörtgenin Alanı: %d\n", alan);
    printf("Dikdörtgenin Çevresi: %d\n", cevre);
}

int main() {
    struct Dikdortgen dikdortgen;

    printf("Uzun kenarı giriniz: ");
    scanf("%d", &dikdortgen.uzunKenar);

    printf("Kısa kenarı giriniz: ");
    scanf("%d", &dikdortgen.kisaKenar);
    hesaplaVeYazdir(dikdortgen);

    return 0;
}
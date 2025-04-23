
// Verilen bir sayının karesini hesaplayan algoritma
#include <stdio.h>

void voidKaresiniAl(int a) {
    int sonuc = a * a;
    printf("%d ", sonuc);
}

int intKaresiniAl(int a) {
    return a * a;
}

int main() {
    int a = 2;
    voidKaresiniAl(a);
    printf("%d", intKaresiniAl(a));
}

// Girilen 2 sayının toplamını ve çarpımını bulan programı yazınız.
#include <stdio.h>

int toplam(int a, int b) {
    return a + b;
}

void carp(int a, int b) {
    int c = a * b;
    printf("Çarpım: %d", c);
}

int main() {
    int a = 2, b = 3;
    printf("Toplam: %d\n", toplam(a, b));
    carp(a, b);
    return 0;
}
// y= 3x² fonksiyonunda verilen x değerine göre y değerini bulunuz. (Örnek: x=2 ise y=12 olmalıdır.)
#include <stdio.h>

int hesapla(int x) {
    return 3 * x * x;
}

int main() {
    int x = 2;
    printf("y = %d", hesapla(x));
    return 0;
}
// Kısa ve uzun kenarı girilen dikdörtgenin alanını ve çevresini  hesaplayan programın algoritmasını oluşturunuz.
#include <stdio.h>

void cevre(int kisa, int uzun) {
    int cevr = 2 * (kisa + uzun);
    printf("Çevre: %d\n", cevr);
}

void alan(int kisa, int uzun) {
    int ala = kisa * uzun;
    printf("Alan: %d\n", ala);
}

int main() {
    int kisa, uzun;
    printf("Kısa ve uzun kenarı girin: ");
    scanf("%d %d", &kisa, &uzun);
    cevre(kisa, uzun);
    alan(kisa, uzun);
    return 0;
}

// Yarıçapı verilen dairenin alanını hesaplayan algoritmayı yazınız. (pi = 3.14)[çevre sorusu]
#include <stdio.h>

void cevre(int kisa, int uzun) {
    int cevr = 2 * (kisa + uzun);
    printf("Çevre: %d\n", cevr);
}

void alan(int kisa, int uzun) {
    int ala = kisa * uzun;
    printf("Alan: %d\n", ala);
}

int main() {
    int kisa, uzun;
    printf("Kısa ve uzun kenarı girin: ");
    scanf("%d %d", &kisa, &uzun);
    cevre(kisa, uzun);
    alan(kisa, uzun);
    return 0;
}

// Fiyat ve kdv oranı girilen ürünün toplam fiyatını ekrana yazdıran algoritmayı yazınız.
#include <stdio.h>

void fiyatKdvHesapla() {
    float fiyat;
    printf("Ürünün fiyatını girin: ");
    scanf("%f", &fiyat);
    float toplamFiyat = fiyat + (fiyat * 0.18);
    printf("Toplam fiyat: %.2f\n", toplamFiyat);
}

int main() {
    fiyatKdvHesapla();
    return 0;
}

// Verilen 3 sayının ortalamasını hesaplayan program
#include <stdio.h>

void ortalama(int a, int b, int c) {
    int ort = (a + b + c) / 3;
    printf("Ortalama: %d\n", ort);
}

int main() {
    int a, b, c;
    printf("Üç tam sayı girin: ");
    scanf("%d %d %d", &a, &b, &c);
    ortalama(a, b, c);
    return 0;
}

// Girilen gün sayısını Yıl, Hafta ve Gün’e çevirerek yazınız.(Örneğin 600 gün için sonuç: 1 yıl 33 hafta 4 gün)
#include <stdio.h>

void gunHesapla(int gun) {
    int yil = gun / 365;
    int hafta = (gun % 365) / 7;
    int kalanGun = (gun % 365) % 7;

    printf("Yıl: %d\n", yil);
    printf("Hafta: %d\n", hafta);
    printf("Gün: %d\n", kalanGun);
}

int main() {
    int gun;
    printf("Gün sayısını girin: ");
    scanf("%d", &gun);
    gunHesapla(gun);
    return 0;
}
// Klavyeden girilen üç farklı tam sayının toplamını sadece 2 değişken kullanarak gerçekleştiren programı yazınız. (Değişkenler: int toplam, sayi; şeklinde 2 tane olmalı, Başka değişken kullanılmayacaktır.)
#include <stdio.h>

int main() {
    int toplam = 0, sayi;

    printf("Birinci sayıyı girin: ");
    scanf("%d", &sayi);
    toplam += sayi;

    printf("İkinci sayıyı girin: ");
    scanf("%d", &sayi);
    toplam += sayi;

    printf("Üçüncü sayıyı girin: ");
    scanf("%d", &sayi);
    toplam += sayi;

    printf("Toplam: %d\n", toplam);

    return 0;
}
// A ve B tamsayı değişkenlerinin değerlerini yer değiştiren program(A=3 B=5 girildikten sonra A=5 B=3 olarak yer değişmeli)
#include <stdio.h>

void degistir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 3, b = 5;
    
    printf("Önce: a = %d, b = %d\n", a, b);
    degistir(&a, &b);
    printf("Sonra: a = %d, b = %d\n", a, b);
    
    return 0;
}
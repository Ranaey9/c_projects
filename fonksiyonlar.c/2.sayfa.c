
// Girilen sayının pozitif ya da negatif olduğunu ekrana yazınız.
#include <stdio.h>

void numb() {
    int n;
    printf("Bir sayı giriniz: ");
    scanf("%d", &n);
    if (n > 0) {
        printf("Pozitif: %d\n", n);
    } else {
        printf("Negatif: %d\n", n);
    }
}

int main() {
    numb();
    return 0;
}

//Girilen sayının mutlak değerini alan algoritma
#include <stdio.h>

void absolute_value() {
    int a;
    printf("Bir sayı giriniz: ");
    scanf("%d", &a);
    int abs_value = (a < 0) ? -a : a;
    printf("Sayının mutlak değeri: %d\n", abs_value);
}

int main() {
    absolute_value();
    return 0;
}

// Klavyeden girilen 3 sayı içerisinden en küçük sayıyı bulan algoritma?
#include <stdio.h>

void find_smallest() {
    int a, b, c;
    printf("Üç sayı giriniz: ");
    scanf("%d %d %d", &a, &b, &c);

    int smallest = (a < b && a < c) ? a : (b < a && b < c) ? b : c;
    printf("En küçük sayı: %d\n", smallest);
}

int main() {
    find_smallest();
    return 0;
}
// Girilen sayının 6'nın katı olup olmadığını bulan algoritma?
#include <stdio.h>

void check_multiple_of_6() {
    int num;
    printf("Bir sayı giriniz: ");
    scanf("%d", &num);

    if (num % 6 == 0) {
        printf("%d sayısı 6'nın katıdır.\n", num);
    } else {
        printf("%d sayısı 6'nın katı değildir.\n", num);
    }
}

int main() {
    check_multiple_of_6();
    return 0;
}

// Vize ve final notuna göre geçme durumunu hesaplayan algoritma(Not=Vize*0,4+Final*0,6) Geçme Notu:55
#include <stdio.h>

void check_multiple_of_6() {
    int num;
    printf("Bir sayı giriniz: ");
    scanf("%d", &num);

    if (num % 6 == 0) {
        printf("%d sayısı 6'nın katıdır.\n", num);
    } else {
        printf("%d sayısı 6'nın katı değildir.\n", num);
    }
}

int main() {
    check_multiple_of_6();
    return 0;
}
// Personelin sabit maaşı ve çocuk sayısı girildiğinde yeni maaş miktarını hesaplayınız.(Çocuk sayısı 1 ise %5, iki ise %10,üç veya daha fazla ise %15 zam yapılacaktır.)
#include <stdio.h>

void calculate_salary() {
    float sabit_maas, yeni_maas;
    int cocuk_sayisi;

    printf("Sabit maaşı giriniz: ");
    scanf("%f", &sabit_maas);
    printf("Çocuk sayısını giriniz: ");
    scanf("%d", &cocuk_sayisi);

    if (cocuk_sayisi == 1) {
        yeni_maas = sabit_maas * 1.05;
    } else if (cocuk_sayisi == 2) {
        yeni_maas = sabit_maas * 1.10;
    } else {
        yeni_maas = sabit_maas * 1.15;
    }

    printf("Yeni maaş: %.2f\n", yeni_maas);
}

int main() {
    calculate_salary();
    return 0;
}

// Dört işlem: 1:Toplama, 2:Çıkarma,3:Çarpma 4:Bölme. Kullanıcıdan iki sayı alıp işlemi seçerek sonucu ekranda yazınız?(if-else, switch-case)
#include <stdio.h>

void calculate() {
    float a, b;
    int islem;

    printf("İki sayı giriniz: ");
    scanf("%f %f", &a, &b);
    
    printf("İşlem seçiniz (1:Toplama, 2:Çıkarma, 3:Çarpma, 4:Bölme): ");
    scanf("%d", &islem);

    switch (islem) {
        case 1:
            printf("Sonuç: %.2f\n", a + b);
            break;
        case 2:
            printf("Sonuç: %.2f\n", a - b);
            break;
        case 3:
            printf("Sonuç: %.2f\n", a * b);
            break;
        case 4:
            if (b != 0) {
                printf("Sonuç: %.2f\n", a / b);
            } else {
                printf("Hata: Sıfıra bölme işlemi yapılamaz!\n");
            }
            break;
        default:
            printf("Geçersiz işlem!\n");
            break;
    }
}

int main() {
    calculate();
    return 0;
}

// Haftanın Günleri: 1-7 arası girilen değere göre günleri yazdırınız.(if-else, switch-case)
#include <stdio.h>

void calculate() {
    float a, b;
    int islem;

    printf("İki sayı giriniz: ");
    scanf("%f %f", &a, &b);
    
    printf("İşlem seçiniz (1:Toplama, 2:Çıkarma, 3:Çarpma, 4:Bölme): ");
    scanf("%d", &islem);

    switch (islem) {
        case 1:
            printf("Sonuç: %.2f\n", a + b);
            break;
        case 2:
            printf("Sonuç: %.2f\n", a - b);
            break;
        case 3:
            printf("Sonuç: %.2f\n", a * b);
            break;
        case 4:
            if (b != 0) {
                printf("Sonuç: %.2f\n", a / b);
            } else {
                printf("Hata: Sıfıra bölme işlemi yapılamaz!\n");
            }
            break;
        default:
            printf("Geçersiz işlem!\n");
            break;
    }
}

int main() {
    calculate();
    return 0;
}

// Klavyeden girilen 4 sayıdan hangi sayıların ortalamadan büyük/eşit/küçük olduğunu bulan programı yazınız. Örnek: 10, 5, 3, 12 Ort: 7.5 => Ortalamadan büyük olanlar:10,12 Ortalamadan küçük olanlar: 3, 5 olarak yazacaktır.
#include <stdio.h>

void compare_with_average() {
    int num1, num2, num3, num4;
    printf("Dört sayı giriniz: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    float average = (num1 + num2 + num3 + num4) / 4.0;
    printf("Ortalama: %.2f\n", average);

    printf("Ortalamadan büyük olanlar: ");
    if (num1 > average) printf("%d ", num1);
    if (num2 > average) printf("%d ", num2);
    if (num3 > average) printf("%d ", num3);
    if (num4 > average) printf("%d ", num4);
    printf("\n");

    printf("Ortalamadan küçük olanlar: ");
    if (num1 < average) printf("%d ", num1);
    if (num2 < average) printf("%d ", num2);
    if (num3 < average) printf("%d ", num3);
    if (num4 < average) printf("%d ", num4);
    printf("\n");
}

int main() {
    compare_with_average();
    return 0;
}

// Klavyeden girilen sıralı 3 tam sayı ile dik üçgen çizilip çizilemeyeceğini gösteren program kodunu yazınız. A2 + B2 = C2 şartını sağlamalıdır. Örnek: A=3, B=4, C=5 (sayılar sıralı girilmiştir) girildiğinde sonuc “DİK ÜÇGEN ÇİZİLEBİLİR” yazmalıdır.
#include <stdio.h>

void check_right_triangle() {
    int a, b, c;
    printf("Üç kenar uzunluğu giriniz (sıralı şekilde): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a * a + b * b == c * c) {
        printf("Dik üçgen çizilebilir!\n");
    } else {
        printf("Dik üçgen çizilemez.\n");
    }
}

int main() {
    check_right_triangle();
    return 0;
}
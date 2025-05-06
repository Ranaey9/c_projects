#include <stdio.h>
#include <stdlib.h>

struct dugum {
    int veri;
    struct dugum* sonraki;
};

struct dugum* bas = NULL;

void sona_ekle(int sayi) {
    struct dugum* yeni = (struct dugum*)malloc(sizeof(struct dugum));
    yeni->veri = sayi;
    yeni->sonraki = NULL;

    if (bas == NULL) {
        bas = yeni;
        
    } else {
        struct dugum* gecici = bas;
        while (gecici->sonraki != NULL) {
            gecici = gecici->sonraki;
        }
        gecici->sonraki = yeni;
    }
}

void listeyi_ters_cevir() {
    struct dugum* yeni_bas = NULL;
    struct dugum* gecici = bas;
    while (gecici != NULL) {
        struct dugum* yeni_dugum = (struct dugum*)malloc(sizeof(struct dugum));
        yeni_dugum->veri = gecici->veri;
        yeni_dugum->sonraki = yeni_bas;
        yeni_bas = yeni_dugum;

        gecici = gecici->sonraki;
    }
    while (bas != NULL) {
        struct dugum* sil = bas;
        bas = bas->sonraki;
        free(sil);
    }
    bas = yeni_bas;
}
void ortalama_ortaya_ekle() {
    if (bas == NULL || bas->sonraki == NULL) {
        printf("Ortalama eklemek için en az 2 eleman olmalı.\n");
        return;
    }
    int uzunluk = 0;
    struct dugum* gecici = bas;
    while (gecici != NULL) {
        uzunluk++;
        gecici = gecici->sonraki;
    }
    int orta_index = uzunluk / 2 ;  
    struct dugum* onceki = bas;
    for (int i = 0; i < orta_index; i++) {
        onceki = onceki->sonraki;
    }

    struct dugum* orta = onceki->sonraki;

    int ortalama = (onceki->veri + orta->veri) / 2;

    struct dugum* yeni = (struct dugum*)malloc(sizeof(struct dugum));
    yeni->veri = ortalama;
    yeni->sonraki = orta;
    onceki->sonraki = yeni;


}
void listeyi_yazdir() {
    struct dugum* gecici = bas;
    printf("Bağlı Liste: ");
    while (gecici != NULL) {
        printf("%d->", gecici->veri);
        gecici = gecici->sonraki;
    }
    printf("NULL\n");
}

int main() {
    int sayi;
    while (1) {
        printf("Sayı gir ");
        scanf("%d", &sayi);
        if (sayi == -1) {
            break;
        }
        sona_ekle(sayi);
    }
    printf("\nters \n");
    listeyi_ters_cevir();
    listeyi_yazdir();

    printf("\nOrtadaki elemanların ortalaması\n");
    ortalama_ortaya_ekle();
    listeyi_yazdir();

    return 0;
}

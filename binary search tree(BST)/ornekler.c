// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Agac {
//     int data;
//     struct Agac *sol;
//     struct Agac *sag;
// } Agac;

// Agac *kok = NULL;

// Agac *ekle(Agac *dugum, int veri) {
//     if (dugum == NULL) {
//         Agac*yeni = (Agac *)malloc(sizeof(Agac));
//         yeni->data = veri;
//         yeni->sol = NULL;
//         yeni->sag = NULL;
//         return yeni;
//     }

//     if (veri <= dugum->data) {
//         dugum->sol = ekle(dugum->sol, veri);
//     } else {
//         dugum->sag = ekle(dugum->sag, veri);
//     }
//     return dugum;
// }

// void preOrder(Agac *dugum) {
//     if (dugum == NULL) return;
//     printf("%d ", dugum->data);
//     preOrder(dugum->sol);
//     preOrder(dugum->sag);
// }

// void inOrder(Agac *dugum) {
//     if (dugum == NULL) return;
//     inOrder(dugum->sol);
//     printf("%d ", dugum->data);
//     inOrder(dugum->sag);
// }

// void postOrder(Agac *dugum) {
//     if (dugum == NULL) return;
//     postOrder(dugum->sol);
//     postOrder(dugum->sag);
//     printf("%d ", dugum->data);
// }

// int maksimum(Agac *dugum) {
//     if (dugum == NULL) return -1;
//     while (dugum->sag != NULL) {
//         dugum = dugum->sag;
//     }
//     return dugum->data;
// }

// int minimum(Agac *dugum) {
//     if (dugum == NULL) return -1;
//     while (dugum->sol != NULL) {
//         dugum = dugum->sol;
//     }
//     return dugum->data;
// }

// int ara(Agac *dugum, int aranan) {
//     if (dugum == NULL) return 0;
//     if (dugum->data == aranan) return 1;
//     if (aranan < dugum->data)
//         return ara(dugum->sol, aranan);
//     else
//         return ara(dugum->sag, aranan);
// }

// int main() {
//     kok = ekle(kok, 10);
//     ekle(kok, 7);
//     ekle(kok, 6);
//     ekle(kok, 88);
//     ekle(kok, 5);
//     ekle(kok, 12);
//     ekle(kok, 61);
//     ekle(kok, 120);

//     printf("\nAra 6: %d", ara(kok, 6));
//     printf("\nAra 888: %d", ara(kok, 888));

//     printf("\nPRE ORDER: ");
//     preOrder(kok);

//     printf("\nPOST ORDER: ");
//     postOrder(kok);

//     printf("\nIN ORDER (Kucukten buyuge): ");
//     inOrder(kok);

//     int enBuyuk = maksimum(kok);
//     if (enBuyuk != -1) {
//         printf("\nEn buyuk eleman: %d", enBuyuk);
//     }

//     int enKucuk = minimum(kok);
//     if (enKucuk != -1) {
//         printf("\nEn kucuk eleman: %d\n", enKucuk);
//     }

//     return 0;
// }




///örnekler/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

// Özyinelemeli ekleme
Node* insertRecursive(Node* kok, int aranan) {
    if (kok == NULL) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = aranan;
        newNode->left = newNode->right = NULL;
        return newNode;
    }
    if (aranan < kok->data)
        kok->left = insertRecursive(kok->left, aranan);
    else if (aranan > kok->data)
        kok->right = insertRecursive(kok->right, aranan);
    return kok;
}

// Minimum - Maksimum (Recursive)
int min(Node* kok) {
    if (kok->left == NULL)
        return kok->data;
    return min(kok->left);
}
int max(Node* kok) {
    if (kok->right == NULL)
        return kok->data;
    return max(kok->right);
}

// Büyükten küçüğe yazdır
void buyuktenkucuge(Node* kok) {
    if (kok == NULL) return;
    buyuktenkucuge(kok->right);
    printf("%d ", kok->data);
    buyuktenkucuge(kok->left);
}

// Çift sayı sayısı
int ciftsayi(Node* kok) {
    if (kok == NULL) return 0;
    int adet = (kok->data % 2 == 0) ? 1 : 0;
    return adet + ciftsayi(kok->left) + ciftsayi(kok->right);
}

// Arama ve adım sayısı ***
int arama_adimsayisi(Node* kok, int aranan) {
    int sayac = 0;
    while (kok != NULL) {
        sayac++;
        if (aranan == kok->data) {
            printf("Sayı %d adımda bulundu.\n", sayac);
            return 1;
        } else if (aranan < kok->data)
            kok = kok->left;
        else
            kok = kok->right;
    }
    printf("Sayı bulunamadı.\n");
    return 0;
}

// Çocuk yazdırma
void cocukyazdırma(Node* kok, int aranan) {
    while (kok != NULL) {
        if (aranan == kok->data) {
            if (kok->left)
                printf("Sol çocuk: %d\n", kok->left->data);
            else
                printf("Sol çocuk yok.\n");
            if (kok->right)
                printf("Sağ çocuk: %d\n", kok->right->data);
            else
                printf("Sağ çocuk yok.\n");
            return;
        } else if (aranan < kok->data)
            kok = kok->left;
        else
            kok = kok->right;
    }
    printf("Sayı bulunamadı.\n");
}

// Değerlere sabit sayı ekle***
void guncelle(Node* kok, int sayi) {
    if (kok == NULL) return;
    kok->data += sayi;  // Düğüm değerine sayıyı ekle
    guncelle(kok->left, sayi);
    guncelle(kok->right, sayi);
}

// Ortalama hesaplama**
void ortalama(Node* kok, int* sum, int* adet) {
    if (kok == NULL) return;
    *sum += kok->data;
    (*adet)++;
    ortalama(kok->left, sum, adet);
    ortalama(kok->right, sum, adet);
}

// Ortalamadan büyükleri sırayla yazdırma
void ortalmadan_buyuk(Node* kok, float ort) {
    if (kok == NULL) return;
    ortalmadan_buyuk(kok->left, ort);
    if (kok->data > ort)
        printf("%d ", kok->data);
    ortalmadan_buyuk(kok->right, ort);
}

int main() {
    Node* kok = NULL;
    int n, aranan;

    printf("Kaç sayı gireceksiniz? ");
    scanf("%d", &n);

    printf("%d sayı giriniz:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &aranan);
        kok = insertRecursive(kok, aranan);
    }

    printf("\nEn küçük (recursive): %d\n", min(kok));
    printf("En büyük (recursive): %d\n", max(kok));

    printf("\nSayılar büyükten küçüğe:\n");
    buyuktenkucuge(kok);

    printf("\n\nÇift sayı adedi: %d\n", ciftsayi(kok));

    printf("\nAranacak sayı: ");
    scanf("%d", &aranan);
    arama_adimsayisi(kok, aranan);

    printf("\nSayı düğümünün çocukları için tekrar sayı girin: ");
    scanf("%d", &aranan);
    cocukyazdırma(kok, aranan);

    printf("\nTüm düğüm değerlerine eklenecek sayı: ");
    scanf("%d", &aranan);
    guncelle(kok, aranan);
    printf("Yeni sıralı değerler (küçükten büyüğe):\n");
    ortalmadan_buyuk(kok, -1e9); // tümünü yazdırmak için

    int sum = 0, adet = 0;
    ortalama(kok, &sum, &adet);
    float ort = (float)sum / adet;

    printf("\n\nOrtalama: %.2f\n", ort);
    printf("Ortalamadan büyük olanlar (küçükten büyüğe):\n");
    ortalmadan_buyuk(kok, ort);

    return 0;
}

 

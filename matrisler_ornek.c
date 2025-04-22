 1. 0-100 Arası Rastgele Sayılardan Oluşan 6x6 Matrisin En Büyük, En Küçük ve Ortalama Değeri
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//     int matrix[6][6], max, min, sum = 0;
//     float average;
//     int i, j;

//     srand(time(0));

//     // Matrisi oluştur ve yazdır
//     for (i = 0; i < 6; i++) {
//         for (j = 0; j < 6; j++) {
//             matrix[i][j] = rand() % 101;
//             printf("%3d ", matrix[i][j]);
//         }
//         printf("\n");
//     }

//     max = min = matrix[0][0];

//     // En büyük, en küçük ve toplamı bul
//     for (i = 0; i < 6; i++) {
//         for (j = 0; j < 6; j++) {
//             if (matrix[i][j] > max)
//                 max = matrix[i][j];
//             if (matrix[i][j] < min)
//                 min = matrix[i][j];
//             sum += matrix[i][j];
//         }
//     }
//     average = sum / 36.0;
//     printf("Max: %d\nMin: %d\nAverage: %.2f\n", max, min, average);
//     return 0;
// }

2.1 ile 20 arasındaki sayıları ve bu sayıların kareköklerini içeren bir matris oluşturup yazdırınız. (Birinci sütunda sayılar, ikinci sütunda karekökleri)
#include <stdio.h>
#include <math.h>

int main() {
    int i;

    printf("Sayi\tKarekök\n");
    for (i = 1; i <= 20; i++) {
        printf("%2d\t%.6f\n", i, sqrt(i));
    }

    return 0;
}


3. 0-50 arası rastgele sayılardan oluşan bir 5x5 matriste 30’dan büyük olan kaç tane sayı vardır?
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matrix[3][3], i, j, count = 0;

    srand(time(0));

    printf("3x3 Matris:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matrix[i][j] = rand() % 41 + 10; // 10-50 arası
            printf("%3d ", matrix[i][j]);
            if (matrix[i][j] > 40)
                count++;
        }
        printf("\n");
    }

    printf("40'tan büyük eleman sayısı: %d\n", count);
    return 0;
}


4. 0-100 arası rastgele sayılardan oluşan bir 6x6 matristeki en büyük, en küçük ve ortalama sayıyı hesaplayınız
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matrix[4][4], i, j, sum = 0;

    srand(time(0));

    printf("4x4 Matris:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matrix[i][j] = rand() % 100 + 1;
            printf("%3d ", matrix[i][j]);
            sum += matrix[i][j];
        }
        printf("\n");
    }

    printf("Toplam: %d\n", sum);
    return 0;
}
5. 10-50 arası rastgele sayılardan oluşan 3x3 bir matristeki 40'tan büyük elemanların sayısını bulunuz.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matrix[3][3], i, j, count = 0;
    srand(time(0));

    printf("3x3 matris:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matrix[i][j] = rand() % 41 + 10;
            printf("%d ", matrix[i][j]);
            if (matrix[i][j] > 40) count++;
        }
        printf("\n");
    }
    printf("40'tan büyük eleman sayısı: %d\n", count);
    return 0;
}

6. 1’den 100’e kadar olan sayılarla oluşturulmuş bir 4x4 matrisin tüm elemanlarının toplamını hesaplayınız.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matrix[4][4], i, j, sum = 0;
    srand(time(0));

    printf("4x4 matris:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matrix[i][j] = rand() % 100 + 1;
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j];
        }
        printf("\n");
    }
    printf("Toplam: %d\n", sum);
    return 0;
}


7. 0-9 arasındaki rastgele sayılarla oluşturulmuş 4x4 bir matrisin satırları boyunca toplamları hesaplayınız.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matrix[4][4], i, j;
    srand(time(0));

    for (i = 0; i < 4; i++) {
        int satirToplam = 0;
        for (j = 0; j < 4; j++) {
            matrix[i][j] = rand() % 11;
            printf("%d ", matrix[i][j]);
            satirToplam += matrix[i][j];
        }
        printf("=> Satır %d Toplam: %d\n", i + 1, satirToplam);
    }
    return 0;
}


8. 1 ile 100 arasında rastgele seçilmiş sayılardan oluşan 2x5 boyutunda bir matrisin her bir satırındaki en küçük sayıyı bulunuz.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matrix[2][5], i, j;
    srand(time(0));

    for (i = 0; i < 2; i++) {
        int min = 101;
        for (j = 0; j < 5; j++) {
            matrix[i][j] = rand() % 100 + 1;
            printf("%d ", matrix[i][j]);
            if (matrix[i][j] < min) min = matrix[i][j];
        }
        printf("=> Satır %d en küçük: %d\n", i + 1, min);
    }
    return 0;
}


9. Bir 2x3 matrisin her elemanını 5 ile çarpıp yeni matrisi yazdırınız.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matrix[2][3], i, j;
    srand(time(0));

    printf("Orijinal matris:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            matrix[i][j] = rand() % 100 + 1;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("5 ile çarpılmış matris:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            matrix[i][j] *= 5;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


10. 0 ile 200 arasında rastgele sayılardan oluşan bir 4x4 matrisin en büyük ve en küçük elemanlarının farkını bulunuz.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matrix[4][4], i, j, min, max;
    srand(time(0));

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matrix[i][j] = rand() % 201;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    min = max = matrix[0][0];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matrix[i][j] > max) max = matrix[i][j];
            if (matrix[i][j] < min) min = matrix[i][j];
        }
    }

    printf("Fark: %d\n", max - min);
    return 0;
}


11. Bir 6x6 boyutunda rastgele sayılardan oluşan matrisin 3. satırındaki en küçük sayıyı bulunuz.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matrix[6][6], i, j, min;
    srand(time(0));

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            matrix[i][j] = rand() % 100 + 1;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    min = matrix[2][0];
    for (j = 1; j < 6; j++) {
        if (matrix[2][j] < min)
            min = matrix[2][j];
    }

    printf("3. satırın en küçüğü: %d\n", min);
    return 0;
}


12. 2x3 boyutunda bir matris oluşturun. Kullanıcıdan bu matrisi doldurmasını isteyin ve ardından matrisin satırlarıyla sütunlarının toplamlarını ayrı ayrı hesaplayın.
#include <stdio.h>

int main() {
    int a[2][3], i, j, satir[2] = {0}, sutun[3] = {0};

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
            satir[i] += a[i][j];
            sutun[j] += a[i][j];
        }
    }

    for (i = 0; i < 2; i++) {
        printf("Satır %d toplam: %d\n", i + 1, satir[i]);
    }
    for (j = 0; j < 3; j++) {
        printf("Sütun %d toplam: %d\n", j + 1, sutun[j]);
    }

    return 0;
}


13. Bir 6x6 matrisinin her elemanının, kendisinden önceki tüm matris elemanlarının toplamına eşit olduğu yeni bir matris oluşturun (yani, her eleman kendisinden önceki tüm elemanların toplamı olacak).
#include <stdio.h>

int main() {
    int a[6][6], i, j, toplam = 1;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            a[i][j] = toplam;
            toplam += a[i][j];
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}


14. 3x3 matrisin her elemanını, kendisinden önceki satırın aynı sütunundaki elemanın karesiyle çarpın ve yeni matrisi yazdırın.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j;
    int matris[3][3], yeni[3][3];
    srand(time(0));

    printf("Orijinal matris:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matris[i][j] = rand() % 10 + 1;
            printf("%d\t", matris[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == 0)
                yeni[i][j] = matris[i][j];
            else
                yeni[i][j] = matris[i][j] * matris[i - 1][j] * matris[i - 1][j];
        }
    }

    printf("\nYeni matris:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", yeni[i][j]);
        }
        printf("\n");
    }

    return 0;
}

15. Bir 2x3 matrisindeki en büyük sayının yerini ve değerini bulun, ardından o elemanı silin ve geriye kalan matrisin toplamını hesaplayın.
#include <stdio.h>

int main() {
    int a[3][2], i, j, sum = 0, max;
    int max_i = 0, max_j = 0;

    // Giriş
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // En büyük elemanı bul
    max = a[0][0];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }

    // En büyük elemanı 0 yap
    a[max_i][max_j] = 0;

    // Toplam hesapla
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            sum += a[i][j];
        }
    }

    printf("En büyük değer: %d\n", max);
    printf("Toplam: %d\n", sum);
    return 0;
}


16. Bir 4x4 matrisinin her satırındaki tüm sayıları 2 ile çarparak yeni bir matris oluşturun. Bu yeni matrisin tüm elemanlarının toplamını hesaplayın.
#include <stdio.h>

int main() {
    int a[4][4], i, j, sum = 0;

    printf("Matrisin ilk halini girin:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrisin yeni hali:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            a[i][j] *= 2;
            printf("%d ", a[i][j]);
            sum += a[i][j];
        }
        printf("\n");
    }

    printf("Toplam: %d\n", sum);
    return 0;
}


17.(!!***)Bir 3x3 matrisindeki her elemanı, o elemanın bulunduğu satırdaki tüm elemanların ortalaması ile çarpın. Sonuç olarak oluşan matrisi yazdırın.
#include <stdio.h>
int main() {
    int a[3][3], i, j;
    float ort[3] = {0}, sum;
    float b[3][3] = {0};

    printf("Matrisin ilk hali:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Satır ortalamalarını hesapla
    for(i = 0; i < 3; i++) {
        sum = 0;
        for(j = 0; j < 3; j++) {
            sum += a[i][j];
        }
        ort[i] = sum / 3.0;
    }

    // Her elemanı kendi satır ortalamasıyla çarp
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            b[i][j] = a[i][j] * ort[i];
        }
    }

    printf("Matrisin ortalama ile çarpılmış hali:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%.2f ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}


18.Kullanıcıdan bir dizi uzunluğu ve elemanlarını alarak, bu diziyi ters sırayla yazdıran bir program yazınız.
#include <stdio.h>
int main() {
    int n;
    printf("Dizi uzunluğu girin: ");
    scanf("%d", &n);

    int a[n];
    printf("Elemanları girin:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Ters hali:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    return 0;
}


19. Kullanıcıdan pozitif sayılar alarak (negatif bir sayı girilince işlem sonlanacak), çift sayıların toplamını ve tek sayıların toplamını ayrı ayrı hesaplayan bir program yazınız.
#include <stdio.h>
int main() {
    int sayi, sum1 = 0, sum2 = 0;

    printf("Pozitif sayılar girin (negatif sayı ile bitir):\n");

    while (1) {
        scanf("%d", &sayi);
        if (sayi < 0)
            break;

        if (sayi % 2 == 0)
            sum1 += sayi;
        else
            sum2 += sayi;
    }

    printf("Çiftlerin toplamı: %d\n", sum1);
    printf("Teklerin toplamı: %d\n", sum2);
    return 0;
}


20. Kullanıcıdan bir dizi boyutu ve elemanlarını alarak, dizideki en büyük ve en küçük elemanları bulan bir program yazınız.
#include <stdio.h>
int main() {
    int n;
    printf("Dizi boyutu girin: ");
    scanf("%d", &n);
    int a[n];

    printf("Elemanları girin:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max = a[0], min = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    printf("En büyük: %d\n", max);
    printf("En küçük: %d\n", min);
    return 0;
}
21. Kullanıcıdan bir 3×3 matris girmesini isteyiniz. Her satırdaki en büyük sayıyı bulun ve bu sayıların toplamını ekrana yazdıran bir program yazınız.
#include <stdio.h>
int main() {
    int a[3][3];
    printf("3x3 matris girin:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < 3; i++) {
        int max = a[i][0];
        for (int j = 0; j < 3; j++) {
            if (a[i][j] > max)
                max = a[i][j];
        }
        sum += max;
    }

    printf("Her satırın en büyük elemanlarının toplamı: %d\n", sum);
    return 0;
}


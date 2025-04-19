// 1.soru => Kullanıcıdan alınan sayıları bir diziye aktardıktan sonra yine kullanıcıdan alınan bir sayıyı bu dizi üzerinde Doğrusal Arama yöntemi ile arayıp sonucu ekrana yazdıran programı yazınız. Ayrıca kaç adımda bulunduğu da yazılacaktır.
#include <stdio.h>

int main() {
    int array[5], number, found = 0;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &number);

    // Doğrusal Arama
    for (int i = 0; i < 5; i++) {
        if (array[i] == number) {
            printf("Number %d found at position %d.\n", number, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Number %d not found in the array.\n", number);
    }

    return 0;
}



// // 4.soru => Kullanıcıdan alınan N değerine göre N adet rastgele sayı içeren bir dizi oluşturulacaktır. Bu sayılar kullanıcının seçeceği sıralama algoritmasına göre sıralanacaktır. Her sıralama adımında dizinin anlık gecmeu yazdırılmalıdır.
// #include <stdio.h>
// int main()
// {
//     int n, no;
//     printf("n gir");
//     scanf("%d", &n);
//     int d[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &d[i]);
//     }
//     printf("sıralma işlemi seç=>\nselection=1\nbubble=2\n");
//     scanf("%d", &no);
//     if (no == 1)
//     {
//         printf("selection sort\n");
//         for (int i = 0; i < n - 1; i++) {
//             int min = i;
//             for (int j = i + 1; j < n; j++) {
//                 if (d[j] < d[min]) {
//                     min = j;
//                 }
//             }
//             int temp = d[i];
//             d[i] = d[min];
//             d[min] = temp;
//             for (int k = 0; k < n; k++) {
//                 printf("%d ", d[k]);
//             }
//             printf("\n");
//         }
//     }
//     else
//     {
//         printf("bubble sort\n");
//         for (int i = 0; i < n - 1; i++)
//         {
//             for (int j = 0; j < n - i - 1; j++)
//             {
//                 if (d[j] > d[j + 1])
//                 {
//                     int temp = d[j];
//                     d[j] = d[j + 1];
//                     d[j + 1] = temp;
//                 }
//             }
//             for (int i = 0; i < n; i++)
//             {
//                 printf("%d ", d[i]);
//             }
//             printf("\n");
//         }
//     }
//     printf("sonuc:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", d[i]);
//     }
//     return 0;
// }

// // 6.soru => İkili arama fonksiyonunu özyinelemeli olarak yazınız.
// #include <stdio.h>
// int ikiliarama(int d[],int ilk,int son,int aranan) {
// int ort=(ilk+son)/2;
// if(ilk >son ){
// return 0;
// }
// if(d[ort]==aranan){
//     return ort;
// }
// else if (d[ort] > aranan)
//         {
//           return  ikiliarama(d, ilk, ort - 1, aranan);
//         }
//         else
//         {
//             return ikiliarama(d, ort + 1, son, aranan);
//         }
// }
// void bubbleSort(int d[], int n)
// {
//     int i, j;
//     for (i = 0; i < n - 1; i++)
//     {
//         for (j = 0; j < n - i - 1; j++)
//         {
//             if (d[j] > d[j + 1])
//             {
//                 int temp = d[j];
//                 d[j] = d[j + 1];
//                 d[j + 1] = temp;
//             }
//         }
//     }
// }
// int main(){
//     int n, aranan ,i,j,ilk,son;
//     printf("Dizi boyutunu giriniz: ");
//     scanf("%d", &n);
//     int dizi[n];
//     printf("Dizinin elemanlarını küçükten büyüğe sıralı olarak giriniz:\n");
//     for (int i = 0; i < n; i++) {
//       scanf("%d", &dizi[i]);
//     }
//   bubbleSort(dizi, n);
//     printf("Aranacak sayıyı giriniz: ");
//     scanf("%d", &aranan);
// int sonuc=ikiliarama(dizi, 0, n - 1, aranan);
// if (sonuc != -1) {
//     printf("Aranan eleman dizinin %d. indeksinde bulundu.\n", sonuc);
// } else {
//     printf("Aranan eleman dizide bulunamadı.\n");
// } return 0;
// }


// İsminizi 5 defa yazdıran programın algoritması?
// #include <stdio.h>
// int isim()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         printf("name\n");
//     }
// }
// int main()
// {
//     isim();
//     return 0;
// }

// Kullanıcıdan alınan ismi istendiği kadar ekrana yazdıran algoritma?
// #include <stdio.h>
// void isim(char n[], int a)
// {
//     for (int i = 0; i < a; i++)
//     {
//         printf("%s\n", n);
//     }
// }
// int main()
// {
//     char n[50];
//     int a;
//     printf("isiminizi girin");
//     scanf("%s", &n);
//     printf(" a kaç defa tekrar edilir");
//     scanf("%d", &a);
//     isim(n, a);
//     return 0;
// }

// 1’den 10’a kadar olan sayıları yazdırınız.
// #include <stdio.h>
// void sayi(int a)
// {
//     for (int i = 1; i < 11; i++)
//     {
//         printf("%d ", i);
//     }
// }
// int main()
// {
//     int a;
//     sayi(a);
//     return 0;
// }

// Verilen 2 sayı arasında kalan sayıları yazdırınız.
// #include <stdio.h>
// void sayi(int a, int b)
// {
//     for (int i = a; i < b; i++)
//     {
//         printf("%d ", i);
//     }
// }
// int main()
// {
//     int a, b;
//     printf("a ve b sayilarini gir");
//     scanf("%d%d", &a, &b);
//     sayi(a, b);
//     return 0;
// }

// 1’den 10’a kadar olan sayıların toplamını bulunuz.
// #include <stdio.h>
// void sayi()
// {
//     int sum = 0;
//     for (int i = 0; i <= 10; i++)
//     {
//         printf("%d ", i);
//         sum += i;
//     }
//     printf("toplam:%d", sum);
// }
// int main()
// {
//     sayi();
//     return 0;
// }

// Girilen N değerine göre 0-N arası çift sayıların toplamını bulunuz.
// #include <stdio.h>
// void sayi(int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i += 2)
//     {
//         printf("%d ", i);
//         sum += i;
//     }
//     printf("\ntoplam:%d", sum);
// }
// int main()
// {
//     int n;
//     printf("sayi gir");
//     scanf("%d", &n);
//     sayi(n);
//     return 0;
// }

// Girilen N adet sayının ortalamasını bulan program?
//  #include <stdio.h>
//  void sayi(int a) {
//      int sum = 0;
//      int number;
//      for(int i = 0; i < a; i++) {
//          printf("%d. sayıyı girin: ", i + 1);
//          scanf("%d", &number);
//          sum += number;
//      }
//      float ort = (float)sum / a;
//      printf("Ortalama: %.2f\n", ort);
//  }
//  int main() {
//      int a;
//      printf("Kaç adet sayı gireceksiniz? ");
//      scanf("%d", &a);
//      sayi(a);
//      return 0;
//  }

// Dört işlem: Kullanıcıdan 2 sayı alarak işlem seçtiren ve kullanıcı çıkış yapana kadar bu işlemi devam ettiren algoritma(1.Toplama,2.Çıkarma, 3.Çarpma, 4.Bölme, 0.Çıkış)
// #include <stdio.h>
// void islem(int a, int b, int no)
// {
//     printf("no:top=1,cık=2,carp=3,bölm=4,cıkıs=5");
//     while (1)
//     {
//         scanf("%d", &no);
//         if (no == 1)
//         {
//             printf("%d", a + b);
//         }
//         if (no == 2)
//         {
//             printf("%d", a - b);
//         }
//         if (no == 3)
//         {
//             printf("%d", a * b);
//         }
//         if (no == 4)
//         {
//             printf("%d", a / b);
//         }
//         if (no == 5)
//         {
//             printf("yanlış");
//         }
//     }
// }
// int main()
// {
//     int a, b, no;
//     printf("sayi gir");
//     scanf("%d%d", &a, &b);
//     islem(a, b, no);
//     return 0;
// }

// Sayı tahmin oyunu: Programda tanımlanan bir sayıyı kullanıcıdan tahmin etmesini isteyen ve tahmine göre sayının daha küçük veya büyük olduğunu yazıp tekrar tahmin isteyen program.
// #include <stdio.h>
// void oyun()
// {
//     int a = 4;
//     int b;
//     while (1)
//     {
//         printf("sayi tahmini girin\n");
//         scanf("%d", &b);
//         if (a == b)
//         {
//             printf("dogru tahmin\n");
//             break;
//         }
//         else if (a < b)
//         {
//             printf("tahmini sayıdan buyuk\n");
//         }
//         else
//         {
//             printf("tahmini sayıdan kucuk\n");
//         }
//     }
// }
// int main()
// {
//     oyun();
//     return 0;
// }

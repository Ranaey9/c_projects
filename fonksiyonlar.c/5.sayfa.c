// Verilen bir sayının tam bölenlerini bulan algoritma
// #include <stdio.h>
// void tambolen(int sayi)
// {
//     for (int i = 1; i <= sayi; i++)
//     {
//         if (sayi % i == 0)
//         {
//             printf("%d ", i);
//         }
//     }
// }
// int main()
// {
//     int sayi;
//     printf("sayi girin");
//     scanf("%d", &sayi);
//     tambolen(sayi);
//     return 0;
// }

// Klavyeden girilen a ve b sayılarına göre ab hesaplayınız(pow gibi hazır fonksiyonlar kullanmadan)
// #include <stdio.h>
// int usal(int us, int taban)
// {
//     int sonuc = 1;
//     for (int i = 0; i < us; i++)
//     {
//         sonuc *= taban;
//     }
//     return sonuc;
// }
// int main()
// {
//     int us, taban;
//     printf("us ve taban girin");
//     scanf("%d%d", &us, &taban);
//     int sonuc = usal(us, taban);
//     printf("sonuc:%d", sonuc);
//     return 0;
// }

// Bölme işlemini bölme ve çarpma operatörü kullanmadan hesaplayan programı yazınız.
// #include <stdio.h>
// int main() {
//     int bolunen, bolen;
//     int sonuc = 0;
//     printf("Bölüneni gir: ");
//     scanf("%d", &bolunen);
//     printf("Böleni gir: ");
//     scanf("%d", &bolen);
//     if (bolen == 0) {
//         printf("0'a bölünemez!\n");
//         return 1;
//     }
//     while (bolunen >= bolen) {
//         bolunen = bolunen - bolen;
//         sonuc = sonuc + 1;
//     }
//     printf("Bölüm: %d\n", sonuc);
//     return 0;
// }

// Girilen bir sayının basamak değerlerini yazdırınız
// #include <stdio.h>
// void basamak(int sayi)
// {
//     while (sayi > 0)
//     {
//         int bas = sayi % 10;
//         printf("%d", bas);
//         sayi /= 10;
//     }
//     printf("\n");
// }
// int main()
// {
//     int sayi;
//     printf("sayi gir");
//     scanf("%d", &sayi);
//     basamak(sayi);
//     return 0;
// }

// Girilen sayıyı tersten yazdıran(tamsayı olarak) program(245 => 542).
// #include <stdio.h>
// void terssayı(int sayi, int basamak)
// {
//     int ters = 0, i = 0;
//     while (sayi > 0)
//     {
//         basamak = sayi % 10;
//         sayi = sayi / 10;
//         ters = ters * 10 + basamak;
//         i++;
//     }
//     printf("%d", ters);
// }
// int main()
// {
//     int sayi, basamak;
//     printf("sayi girin");
//     scanf("%d", &sayi);
//     terssayı(sayi, basamak);
//     return 0;
// }

// Girilen sayının faktöriyelini hesaplayan program?
// #include <stdio.h>
// int fak(int n)
// {
//     int sonuc = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         sonuc *= i;
//     }
//     return sonuc;
// }
// int main()
// {
//     int n;
//     printf("n sayisini gir");
//     scanf("%d", &n);
//     int result = fak(n);
//     printf("%d", result);
//     return 0;
// }

// Girilen n değerine göre Fibonacci serisinin ( 0 1 1 2 3 5 8 … ) ilk n terimini hesaplayınız?
//  #include <stdio.h>
//  void fibonacci(int n) {
//      int t1 = 0, t2 = 1, nextTerm;
//      printf("Fibonacci serisinin ilk %d terimi: ", n);
//      for (int i = 1; i <= n; ++i) {
//          printf("%d ", t1);
//          nextTerm = t1 + t2;
//          t1 = t2;
//          t2 = nextTerm;
//      }
//      printf("\n");
//  }
//  int main() {
//      int n;
//      printf("n değerini girin: ");
//      scanf("%d", &n);
//      fibonacci(n);
//      return 0;
//  }

// Girilen n adet sayı içerisinden pozitif, negatif ve sıfır sayısının kaçar adet tekrarlandığını bulunuz.
// #include <stdio.h>
// void sayı(int n)
// {
//     int pozatif = 0, negatif = 0, sıfır = 0, sayı;
//     printf(" sayi gir");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &sayı);
//         if (sayı > 0)
//         {
//             pozatif++;
//         }
//         if (sayı < 0)
//         {
//             negatif++;
//         }
//         if (sayı == 0)
//         {
//             sıfır++;
//         }
//     }
//     printf("p:%d\nn:%d\ns:%d", pozatif, negatif, sıfır);
// }
// int main()
// {
//     int n;
//     printf("adet sayi gir");
//     scanf("%d", &n);
//     sayı(n);
//     return 0;
// }

// Girilen bir sayının Asal Sayı olup olmadığını bulunuz.
// #include <stdio.h>
// void asal(int n)
// {
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             printf("%d asal değildir.\n", n);
//             return 0;
//         }
//     }
//     printf("%d:asaldır\n", n);
// }
// int main()
// {
//     int n;
//     printf("sayi gir");
//     scanf("%d", &n);
//     asal(n);
//     return 0;
// }

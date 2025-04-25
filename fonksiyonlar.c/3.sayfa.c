// Bir alışveriş sitesinde 100 TL ve üzerine kargo bedava iken 100 TL altındaki alışverişlerde ise 20 TL kargo ücreti alınmaktadır. Buna göre kullanıcıdan alışveriş tutarını alıp, kargo ücreti dahil ödemesi gereken toplam tutarını ekrana yazdırınız.
// #include <stdio.h>
// void shopp(int amount)// amount=tutar
// {
//     int kargo = 20, newamount;
//     printf("enter a amount");
//     scanf("%d", &amount);
//     if (amount > 100)
//     {
//         printf("amount is free");
//     }
//     else
//     {
//         newamount = amount + kargo;
//         printf("Total amount with shipping:%d", newamount);
//     }
// }
// int main()
// {
//     int amount;
//     shopp(amount);
//     return 0;
// }

// Kullanıcıdan alınan boy(metre) ve kilo(kg) bilgisine göre kilo durumunu değerlendirip ekrana yazdırınız.Vücut kitle endeksi formülü VKİ = kg/(boy*boy)
//  #include <stdio.h>
//  void body(float height, float weight) {
//      printf("Enter height (in meters) and weight (in kg):\n");
//      scanf("%f %f", &height, &weight);
//      float vki = weight / (height * height);
//      printf("BMI: %.2f\n", vki);
//      if (vki < 18.5) {
//          printf("weak\n");
//      } else if (vki >= 18.5 && vki <= 24.9) {
//          printf("Normal weight\n");
//      } else if (vki >= 25 && vki <= 29.9) {
//          printf("Overweight\n");
//      } else if (vki >= 30 && vki <= 34.9) {
//          printf("Obese\n");
//      } else {
//          printf("Severely obese\n");
//      }
//  }
//  int main() {
//      float height, weight;
//      body(height, weight);
//      return 0;
//  }

// Kullanıcıdan bir karakter girişi alan ve bu karakterin bir harf, rakam veya özel bir karakter olduğunu belirleyen bir program yazın. (ASCII tablosunu kullanarak)
// #include <stdio.h>
// void ascii(char karakter)
// {
//     if (karakter >= 'a' && karakter <= 'z')
//     {
//         printf("harf");
//     }
//     else if (karakter >= '0' && karakter <= '9')
//     {
//         printf("sayi");
//     }
//     else
//     {
//         printf("sembol");
//     }
// }
// int main()
// {
//     int karakter;
//     printf("sayi gir");
//     scanf("%c", &karakter);
//     ascii(karakter);
//     return 0;
// }

// Kullanıcıdan alınan sayının tek veya çift sayı olduğunu, ayrıca tek ise 3’e tam bölünüp bölünmediğini, çift ise 6’ya tam bölünüp bölünmediğini yazdıran programı yazınız.
// #include <stdio.h>
// void sayi(int n)
// {
//     if (n % 2 == 0)
//     {
//         printf("ciftir");
//     }
//     else
//     {
//         printf("tektir");
//     }
// }
// int main()
// {
//     int n;
//     printf("sayi gir");
//     scanf("%d", &n);
//     sayi(n);
//     return 0;
// }

// 3x3 boyutunda bir matrisin elemanlarını kullanıcıdan alarak, bu matrisi yazdırınız.
// #include <stdio.h>
// int main()
// {
//     int matrix[3][3], i, j;
//     printf("enter 3x3 matrix:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("[%d][%d]:", i, j);
//             scanf("%d", &matrix[i][j]);
//         }
//     }
//     printf("matrix 3x3:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 0-50 arası rastgele sayılardan oluşan bir 5x5 matriste 30’dan büyük olan kaç tane sayı vardır?
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main()
// {
//     int matrix[5][5], i, j;
//     srand(time(0));
//     for (i = 0; i < 5; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             matrix[i][j] = rand() % 51;
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
//     printf("5x5 matrix:\n");
//     for (i = 0; i < 5; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             if (matrix[i][j] > 30)
//             {
//                 printf("30,dan büyük sayilar:%d\n", matrix[i][j]);
//             }
//         }
//     }
//     return 0;
// }

// 0-100 arası rastgele sayılardan oluşan bir 6x6 matristeki en büyük, en küçük ve ortalama sayıyı hesaplayınız
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main()
// {
//     int matrix[6][6], max, min, i, j, sum = 0;
//     float average;
//     srand(time(0));
//     for (i = 0; i < 6; i++)
//     {
//         for (j = 0; j < 6; j++)
//         {
//             matrix[i][j] = rand() % 101;
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
//     max = min = matrix[0][0];
//     for (i = 0; i < 6; i++)
//     {
//         for (j = 0; j < 6; j++)
//         {
//             if (matrix[i][j] > max)
//             {
//                 max = matrix[i][j];
//             }
//             if (matrix[i][j] < min)
//             {
//                 min = matrix[i][j];
//             }
//             sum += matrix[i][j];
//         }
//     }
//     average = sum / 36;
//     printf("max:%d\nmin:%d\naverage:%f", max, min, average);
//     return 0;
// }

// 1 ile 20 arasındaki sayıları ve bu sayıların kareköklerini içeren bir matris oluşturup yazdırınız. (Birinci sütunda sayılar, ikinci sütunda karekökleri)
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int i, j, matrix[2][2];
//     for (i = 1; i <= 20; i++)
//     {
//         double sonuc = sqrt(i);
//         printf("%d\t%.6f\n", i, sonuc);
//     }
//     return 0;
// }

// 10-50 arası rastgele sayılardan oluşan 3x3 bir matristeki 40'tan büyük elemanların sayısını bulunuz.
// #include <stdio.h>
// #include <time.h>
// int main()
// {
//     int matrix[3][3], i, j;
//     srand(time(0));
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             matrix[i][j] = rand() % 41 + 10;
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
//     printf("3x3 matris:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             if (matrix[i][j] > 40)
//             {
//                 printf("40,tan büyük:%d\n", matrix[i][j]);
//             }
//         }
//     }
//     return 0;
// }

// 1’den 100’e kadar olan sayılarla oluşturulmuş bir 4x4 matrisin tüm elemanlarının toplamını hesaplayınız.
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main()
// {
//     int matrix[4][4], i, j, sum = 0;
//     srand(time(0));
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             matrix[i][j] = rand() % 101;
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             printf("%d ", matrix[i][j]);
//         }
//         sum += matrix[i][j];
//     }
//     printf("\nsum:%d", sum);
//     return 0;
// }

// 0-9 arasındaki rastgele sayılarla oluşturulmuş 4x4 bir matrisin satırları boyunca toplamları hesaplayınız.
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main()
// {
//     int matrix[4][4], i, j, sum = 0;
//     srand(time(0));
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             matrix[i][j] = rand() % 11;
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             printf("%d ", matrix[i][j]);
//             sum += matrix[i][j];
//         }
//     }
//     printf("\nsum=%d", sum);
//     return 0;
// }

// 1 ile 100 arasında rastgele seçilmiş sayılardan oluşan 2x5 boyutunda bir matrisin her bir satırındaki en küçük sayıyı bulunuz.
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main()
// {
//     int matrix[2][5], i, j, min;
//     srand(time(0));
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             matrix[i][j] = rand() % 101;
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
//     min = matrix[0][0];
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             if (matrix[i][j] < min)
//             {
//                 min = matrix[i][j];
//             }
//         }
//     }
//     printf("min:%d", min);
//     return 0;
// }

// Bir 2x3 matrisin her elemanını 5 ile çarpıp yeni matrisi yazdırınız.
//  #include <stdio.h>
//  #include <stdlib.h>
//  #include <time.h>
//  int main(){
//      int matrix[2][3],i,j;
//      srand(time(0));
//      for(i=0;i<2;i++){
//          for(j=0;j<3;j++){
//              matrix[i][j] = rand() % 100 + 1;
//              printf("%d ",matrix[i][j]);
//          }
//          printf("\n");
//      }
//      printf("5 ile çarpilmiş matris\n");
//        for(i=0;i<2;i++){
//          for(j=0;j<3;j++){
//              matrix[i][j]*=5;
//              printf("%d ",matrix[i][j]);
//          }
//          printf("\n");
//      }
//      return 0;
//  }

// 0 ile 200 arasında rastgele sayılardan oluşan bir 4x4 matrisin en büyük ve en küçük elemanlarının farkını bulunuz.
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main()
// {
//     int matrix[4][4], i, j, min, max, difference = 0;
//     srand(time(0));
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             matrix[i][j] = rand() % 201;
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
//     max = min = matrix[0][0];
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             if (matrix[i][j] > max)
//             {
//                 max = matrix[i][j];
//             }
//             if (matrix[i][j] < min)
//             {
//                 min = matrix[i][j];
//             }
//         }
//         difference = max - min;
//     }
//     printf("difference:%d", difference);
//     return 0;
// }

// Bir 6x6 boyutunda rastgele sayılardan oluşan matrisin 3. satırındaki en küçük sayıyı bulunuz.
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main()
// {
//     int matrix[6][6], i, j, min;
//     srand(time(0));
//     for (i = 0; i < 6; i++)
//     {
//         for (j = 0; j < 6; j++)
//         {
//             matrix[i][j] = rand() % 100 + 1;
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
//     min = matrix[2][0];
//     for (j = 0; j < 6; j++)
//     {
//         if (matrix[2][j] < min)
//         {
//             min = matrix[2][j];
//         }
//     }
//     printf("min:%d", min);
//     return 0;
// }

// 2x2 boyutunda bir matris oluşturun. Kullanıcıdan bu matrisi doldurmasını isteyin ve ardından matrisin satırlarıyla sütunlarının toplamlarını ayrı ayrı hesaplayın.
//  #include <stdio.h>
//  int main()
//  {
//      int a[2][3], i, j, satır[2] = {0}, sutun[3] = {0};
//      for (i = 0; i < 2; i++)
//      {
//          for (j = 0; j < 3; j++)
//          {
//              printf("[%d][%d]: ", i, j);
//              scanf("%d", &a[i][j]);
//          }
//      }
//      for (i = 0; i < 2; i++)
//      {
//          for (j = 0; j < 3; j++)
//          {
//              satır[i] += a[i][j];
//              sutun[j] += a[i][j];
//          }
//      }
//      for (i = 0; i < 2; i++)
//      {
//          printf("satır %dtoplam:%d\n", i + 1, satır[i]);
//      }
//      for (j = 0; j < 3; j++)
//      {
//          printf("sutun %dtoplaı:%d\n", j + 1, sutun[j]);
//      }
//      return 0;
//  }

// Bir 6x6 matrisinin her elemanının, kendisinden önceki tüm matris elemanlarının toplamına eşit olduğu yeni bir matris oluşturun (yani, her eleman kendisinden önceki tüm elemanların toplamı olacak).
// #include <stdio.h>
// int main()
// {
//     int a[6][6], i, j, sum = 1;
//     for (i = 0; i < 6; i++)
//     {
//         for (j = 0; j < 6; j++)
//         {
//             a[i][j] = sum;
//             sum += a[i][j];
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 3x3 matrisin her elemanını, kendisinden önceki satırın aynı sütunundaki elemanın karesiyle çarpın ve yeni matrisi yazdırın.
//  #include <stdio.h>
//  int main(){
//      int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//      int newa[3][3];
//      int i, j;
//      // Orijinal matrisi yazdırma
//      printf("3x3 matris ilk hali:\n");
//      for (i = 0; i < 3; i++) {
//          for (j = 0; j < 3; j++) {
//              printf("%d ", a[i][j]);
//          }
//          printf("\n");
//      }
//      // İlk satırın yeni matriste aynı kalması
//      for (j = 0; j < 3; j++) {
//          newa[0][j] = a[0][j];
//      }
//      // İkinci satırın hesaplanması
//      for (j = 0; j < 3; j++) {
//          newa[1][j] = a[1][j] * (a[0][j] * a[0][j]);
//      }
//      // Üçüncü satırın hesaplanması
//      for (j = 0; j < 3; j++) {
//          newa[2][j] = a[2][j] * (newa[1][j] * newa[1][j]);
//      }
//      // Yeni matrisi yazdırma
//      printf("3x3 matrisin 2. hali:\n");
//      for (i = 0; i < 3; i++) {
//          for (j = 0; j < 3; j++) {
//              printf("%d ", newa[i][j]);
//          }
//          printf("\n");
//      }
//      return 0;
//  }

// Bir 2x3 matrisindeki en büyük sayının yerini ve değerini bulun, ardından o elemanı silin ve geriye kalan matrisin toplamını hesaplayın.
// #include <stdio.h>
// int main()
// {
//     int a[3][2], i, j, sum = 0, max;
//     int max_i = 0, max_j = 0;
//     max = a[0][0];
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             printf("[%d][%d]:", i, j);
//             scanf("%d", &a[i][j]);
//         }
//     }
//     max = a[0][0];
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             if (a[i][j] > max)
//             {
//                 max = a[i][j];
//                 max_i = i;
//                 max_j = j;
//             }
//         }
//     }
//     a[max_i][max_j] = 0;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             sum += a[i][j];
//         }
//     }
//     printf("En büyük değer: %d\n", max);
//     printf("toplam:%d", sum);
//     return 0;
// }

// Bir 4x4 matrisinin her satırındaki tüm sayıları 2 ile çarparak yeni bir matris oluşturun. Bu yeni matrisin tüm elemanlarının toplamını hesaplayın.
// #include <stdio.h>
// int main()
// {
//     int a[4][4], i, j, sum = 0;
//     printf("matrisin ilk halini girin:\n");
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             printf("[%d][%d]:", i, j);
//             scanf("%d", &a[i][j]);
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("matrisin yeni hali:\n");
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             a[i][j] *= 2;
//             printf("%d ", a[i][j]);
//             sum += a[i][j];
//         }
//         printf("\n");
//     }
//     printf("toplam:%d", sum);
//     return 0;
// }

//(!!***)Bir 3x3 matrisindeki her elemanı, o elemanın bulunduğu satırdaki tüm elemanların ortalaması ile çarpın. Sonuç olarak oluşan matrisi yazdırın.
// #include <stdio.h>
// int main() {
//     int a[3][3], i, j;
//     float ort[3] = {0}, sum;
//     float b[3][3] = {0};
//     printf("Matrisin ilk hali:\n");
//     for(i = 0; i < 3; i++) {
//         for(j = 0; j < 3; j++) {
//             printf("[%d][%d]: ", i, j);
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for(i = 0; i < 3; i++) {
//         sum = 0;
//         for(j = 0; j < 3; j++) {
//             sum += a[i][j];
//         }
//         ort[i] = sum / 3.0;
//     }
//     for(i = 0; i < 3; i++) {
//         for(j = 0; j < 3; j++) {
//             b[i][j] = a[i][j] * ort[i];
//         }
//     }
//     printf("Matrisin ortalama ile çarpılmış hali:\n");
//     for(i = 0; i < 3; i++) {
//         for(j = 0; j < 3; j++) {
//             printf("%.2f ", b[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Kullanıcıdan bir dizi uzunluğu ve elemanlarını alarak, bu diziyi ters sırayla yazdıran bir program yazınız.
// #include <stdio.h>
// void dizi(int a[], int n)
// {
//     printf("sayi gir");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d ", &a[i]);
//     }
//     printf("ters hali\n");
//     for (int i = n - 1; i >= 0; i--)
//     {
//         printf("%d ", a[i]);
//     }
// }
// int main()
// {
//     int n, a[n];
//     dizi(a, n);
//     return 0;
// }

// Kullanıcıdan pozitif sayılar alarak (negatif bir sayı girilince işlem sonlanacak), çift sayıların toplamını ve tek sayıların toplamını ayrı ayrı hesaplayan bir program yazınız.
// #include <stdio.h>
// void islem(int sayi, int n)
// {
//     int sum1 = 0, sum2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &sayi);
//         if (sayi < 0)
//         {
//             break;
//         }
//         if (sayi % 2 == 0)
//         {
//             sum1 += sayi;
//         }
//         if (sayi % 2 != 0)
//         {
//             sum2 += sayi;
//         }
//     }
//     printf("cıf:%d\ntek:%d\n", sum1, sum2);
// }
// int main()
// {
//     int sayi, n;
//     printf("sayi gir");
//     scanf("%d", &n);
//     islem(sayi, n);
//     return 0;
// }

// Kullanıcıdan bir dizi boyutu ve elemanlarını alarak, dizideki en büyük ve en küçük elemanları bulan bir program yazınız.
// #include <stdio.h>
// void dizi(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int max = a[0];
//     int min = a[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//         if (a[i] < min)
//         {
//             min = a[i];
//         }
//     }
//     printf("max:%d\n", max);
//     printf("min:%d\n", min);
// }
// int main()
// {
//     int n;
//     printf("sayi gir");
//     scanf("%d", &n);
//     int a[n];
//     dizi(a, n);
//     return 0;
// }

// Kullanıcıdan bir 3×3 matris girmesini isteyiniz. Her satırdaki en büyük sayıyı bulun ve bu sayıların toplamını ekrana yazdıran bir program yazınız.
// #include <stdio.h>
// void matris(int a[3][3])
// {
//     int i, j;
//     int sum = 0;
//     for (i = 0; i < 3; i++)
//     {
//         int max = a[i][0];
//         for (j = 0; j < 3; j++)
//         {
//             if (a[i][j] > max)
//             {
//                 max = a[i][j];
//             }
//             printf("%d ", a[i][j]);
//         }
//         sum += max;
//         printf("\n");
//     }
//     printf("sum:%d", sum);
// }
// int main()
// {
//     int a[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("[%d][%d]", i, j);
//             scanf("%d", &a[i][j]);
//         }
//     }
//     matris(a);
//     return 0;
// }
